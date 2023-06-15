#include "vs_static_plugins.h"

GST_PLUGIN_STATIC_DECLARE(app); // Definitely needed
GST_PLUGIN_STATIC_DECLARE(autodetect); // Definitely needed
GST_PLUGIN_STATIC_DECLARE(coreelements);
GST_PLUGIN_STATIC_DECLARE(nice);
GST_PLUGIN_STATIC_DECLARE(rtp);
GST_PLUGIN_STATIC_DECLARE(rtpmanager);
GST_PLUGIN_STATIC_DECLARE(sctp);
GST_PLUGIN_STATIC_DECLARE(srtp);
GST_PLUGIN_STATIC_DECLARE(dtls);

//GST_PLUGIN_STATIC_DECLARE(usrsctp);
GST_PLUGIN_STATIC_DECLARE(videoparsersbad);
GST_PLUGIN_STATIC_DECLARE(webrtc);
GST_PLUGIN_STATIC_DECLARE(androidmedia);

GST_PLUGIN_STATIC_DECLARE(videotestsrc); // Definitely needed
GST_PLUGIN_STATIC_DECLARE(videoconvertscale);
GST_PLUGIN_STATIC_DECLARE(overlaycomposition);

GST_PLUGIN_STATIC_DECLARE(playback); // "FFMPEG "
// GST_PLUGIN_STATIC_DECLARE(webrtcnice);


void
vf_init_static_plugins(void)
{
  static gsize initialization_value = 0;

  if (g_once_init_enter (&initialization_value))
    {
      GST_PLUGIN_STATIC_REGISTER(app); // Definitely needed
      GST_PLUGIN_STATIC_REGISTER(autodetect); // Definitely needed
      GST_PLUGIN_STATIC_REGISTER(coreelements);
      GST_PLUGIN_STATIC_REGISTER(nice);
      GST_PLUGIN_STATIC_REGISTER(rtp);
      GST_PLUGIN_STATIC_REGISTER(rtpmanager);

      //GST_PLUGIN_STATIC_REGISTER(usrsctp);
      GST_PLUGIN_STATIC_REGISTER(sctp);
      GST_PLUGIN_STATIC_REGISTER(srtp);
      GST_PLUGIN_STATIC_REGISTER(dtls);
      GST_PLUGIN_STATIC_REGISTER(videoparsersbad);
      GST_PLUGIN_STATIC_REGISTER(webrtc);
      GST_PLUGIN_STATIC_REGISTER(androidmedia);

      GST_PLUGIN_STATIC_REGISTER(videotestsrc); // Definitely needed
      GST_PLUGIN_STATIC_REGISTER(videoconvertscale);
      GST_PLUGIN_STATIC_REGISTER(overlaycomposition);

      GST_PLUGIN_STATIC_REGISTER(playback); // "FFMPEG "
      // GST_PLUGIN_STATIC_REGISTER(webrtcnice);

      g_once_init_leave (&initialization_value, 1);
    }
}

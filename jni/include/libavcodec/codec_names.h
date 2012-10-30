case CODEC_ID_NONE:
    return "none";
case CODEC_ID_MPEG1VIDEO:
    { extern AVCodec ff_mpeg1video_encoder;
      return ff_mpeg1video_encoder.name; }
case CODEC_ID_MPEG2VIDEO:
    { extern AVCodec ff_mpeg2video_decoder;
      return ff_mpeg2video_decoder.name; }
case CODEC_ID_MPEG2VIDEO_XVMC:
    return "mpeg2video_xvmc";
case CODEC_ID_H261:
    return "h261";
case CODEC_ID_H263:
    { extern AVCodec ff_h263_decoder;
      return ff_h263_decoder.name; }
case CODEC_ID_RV10:
    return "rv10";
case CODEC_ID_RV20:
    return "rv20";
case CODEC_ID_MJPEG:
    { extern AVCodec ff_mjpeg_decoder;
      return ff_mjpeg_decoder.name; }
case CODEC_ID_MJPEGB:
    return "mjpegb";
case CODEC_ID_LJPEG:
    return "ljpeg";
case CODEC_ID_SP5X:
    return "sp5x";
case CODEC_ID_JPEGLS:
    return "jpegls";
case CODEC_ID_MPEG4:
    { extern AVCodec ff_mpeg4_decoder;
      return ff_mpeg4_decoder.name; }
case CODEC_ID_RAWVIDEO:
    return "rawvideo";
case CODEC_ID_MSMPEG4V1:
    return "msmpeg4v1";
case CODEC_ID_MSMPEG4V2:
    return "msmpeg4v2";
case CODEC_ID_MSMPEG4V3:
    return "msmpeg4v3";
case CODEC_ID_WMV1:
    return "wmv1";
case CODEC_ID_WMV2:
    return "wmv2";
case CODEC_ID_H263P:
    return "h263p";
case CODEC_ID_H263I:
    return "h263i";
case CODEC_ID_FLV1:
    return "flv1";
case CODEC_ID_SVQ1:
    return "svq1";
case CODEC_ID_SVQ3:
    return "svq3";
case CODEC_ID_DVVIDEO:
    return "dvvideo";
case CODEC_ID_HUFFYUV:
    return "huffyuv";
case CODEC_ID_CYUV:
    return "cyuv";
case CODEC_ID_H264:
    { extern AVCodec ff_h264_decoder;
      return ff_h264_decoder.name; }
case CODEC_ID_INDEO3:
    return "indeo3";
case CODEC_ID_VP3:
    return "vp3";
case CODEC_ID_THEORA:
    return "theora";
case CODEC_ID_ASV1:
    return "asv1";
case CODEC_ID_ASV2:
    return "asv2";
case CODEC_ID_FFV1:
    return "ffv1";
case CODEC_ID_4XM:
    return "4xm";
case CODEC_ID_VCR1:
    return "vcr1";
case CODEC_ID_CLJR:
    return "cljr";
case CODEC_ID_MDEC:
    return "mdec";
case CODEC_ID_ROQ:
    return "roq";
case CODEC_ID_INTERPLAY_VIDEO:
    return "interplay_video";
case CODEC_ID_XAN_WC3:
    return "xan_wc3";
case CODEC_ID_XAN_WC4:
    return "xan_wc4";
case CODEC_ID_RPZA:
    return "rpza";
case CODEC_ID_CINEPAK:
    return "cinepak";
case CODEC_ID_WS_VQA:
    return "ws_vqa";
case CODEC_ID_MSRLE:
    return "msrle";
case CODEC_ID_MSVIDEO1:
    return "msvideo1";
case CODEC_ID_IDCIN:
    return "idcin";
case CODEC_ID_8BPS:
    return "8bps";
case CODEC_ID_SMC:
    return "smc";
case CODEC_ID_FLIC:
    return "flic";
case CODEC_ID_TRUEMOTION1:
    return "truemotion1";
case CODEC_ID_VMDVIDEO:
    return "vmdvideo";
case CODEC_ID_MSZH:
    return "mszh";
case CODEC_ID_ZLIB:
    return "zlib";
case CODEC_ID_QTRLE:
    return "qtrle";
case CODEC_ID_SNOW:
    return "snow";
case CODEC_ID_TSCC:
    return "tscc";
case CODEC_ID_ULTI:
    return "ulti";
case CODEC_ID_QDRAW:
    return "qdraw";
case CODEC_ID_VIXL:
    return "vixl";
case CODEC_ID_QPEG:
    return "qpeg";
case CODEC_ID_PNG:
    return "png";
case CODEC_ID_PPM:
    return "ppm";
case CODEC_ID_PBM:
    return "pbm";
case CODEC_ID_PGM:
    return "pgm";
case CODEC_ID_PGMYUV:
    return "pgmyuv";
case CODEC_ID_PAM:
    return "pam";
case CODEC_ID_FFVHUFF:
    return "ffvhuff";
case CODEC_ID_RV30:
    return "rv30";
case CODEC_ID_RV40:
    return "rv40";
case CODEC_ID_VC1:
    return "vc1";
case CODEC_ID_WMV3:
    return "wmv3";
case CODEC_ID_LOCO:
    return "loco";
case CODEC_ID_WNV1:
    return "wnv1";
case CODEC_ID_AASC:
    return "aasc";
case CODEC_ID_INDEO2:
    return "indeo2";
case CODEC_ID_FRAPS:
    return "fraps";
case CODEC_ID_TRUEMOTION2:
    return "truemotion2";
case CODEC_ID_BMP:
    return "bmp";
case CODEC_ID_CSCD:
    return "cscd";
case CODEC_ID_MMVIDEO:
    return "mmvideo";
case CODEC_ID_ZMBV:
    return "zmbv";
case CODEC_ID_AVS:
    return "avs";
case CODEC_ID_SMACKVIDEO:
    return "smackvideo";
case CODEC_ID_NUV:
    return "nuv";
case CODEC_ID_KMVC:
    return "kmvc";
case CODEC_ID_FLASHSV:
    return "flashsv";
case CODEC_ID_CAVS:
    return "cavs";
case CODEC_ID_JPEG2000:
    return "jpeg2000";
case CODEC_ID_VMNC:
    return "vmnc";
case CODEC_ID_VP5:
    return "vp5";
case CODEC_ID_VP6:
    return "vp6";
case CODEC_ID_VP6F:
    return "vp6f";
case CODEC_ID_TARGA:
    return "targa";
case CODEC_ID_DSICINVIDEO:
    return "dsicinvideo";
case CODEC_ID_TIERTEXSEQVIDEO:
    return "tiertexseqvideo";
case CODEC_ID_TIFF:
    return "tiff";
case CODEC_ID_GIF:
    return "gif";
case CODEC_ID_DXA:
    return "dxa";
case CODEC_ID_DNXHD:
    return "dnxhd";
case CODEC_ID_THP:
    return "thp";
case CODEC_ID_SGI:
    return "sgi";
case CODEC_ID_C93:
    return "c93";
case CODEC_ID_BETHSOFTVID:
    return "bethsoftvid";
case CODEC_ID_PTX:
    return "ptx";
case CODEC_ID_TXD:
    return "txd";
case CODEC_ID_VP6A:
    return "vp6a";
case CODEC_ID_AMV:
    return "amv";
case CODEC_ID_VB:
    return "vb";
case CODEC_ID_PCX:
    return "pcx";
case CODEC_ID_SUNRAST:
    return "sunrast";
case CODEC_ID_INDEO4:
    return "indeo4";
case CODEC_ID_INDEO5:
    return "indeo5";
case CODEC_ID_MIMIC:
    return "mimic";
case CODEC_ID_RL2:
    return "rl2";
case CODEC_ID_ESCAPE124:
    return "escape124";
case CODEC_ID_DIRAC:
    return "dirac";
case CODEC_ID_BFI:
    return "bfi";
case CODEC_ID_CMV:
    return "cmv";
case CODEC_ID_MOTIONPIXELS:
    return "motionpixels";
case CODEC_ID_TGV:
    return "tgv";
case CODEC_ID_TGQ:
    return "tgq";
case CODEC_ID_TQI:
    return "tqi";
case CODEC_ID_AURA:
    return "aura";
case CODEC_ID_AURA2:
    return "aura2";
case CODEC_ID_V210X:
    return "v210x";
case CODEC_ID_TMV:
    return "tmv";
case CODEC_ID_V210:
    return "v210";
case CODEC_ID_DPX:
    return "dpx";
case CODEC_ID_MAD:
    return "mad";
case CODEC_ID_FRWU:
    return "frwu";
case CODEC_ID_FLASHSV2:
    return "flashsv2";
case CODEC_ID_CDGRAPHICS:
    return "cdgraphics";
case CODEC_ID_R210:
    return "r210";
case CODEC_ID_ANM:
    return "anm";
case CODEC_ID_BINKVIDEO:
    return "binkvideo";
case CODEC_ID_IFF_ILBM:
    return "iff_ilbm";
case CODEC_ID_IFF_BYTERUN1:
    return "iff_byterun1";
case CODEC_ID_KGV1:
    return "kgv1";
case CODEC_ID_YOP:
    return "yop";
case CODEC_ID_VP8:
    return "vp8";
case CODEC_ID_PICTOR:
    return "pictor";
case CODEC_ID_ANSI:
    return "ansi";
case CODEC_ID_A64_MULTI:
    return "a64_multi";
case CODEC_ID_A64_MULTI5:
    return "a64_multi5";
case CODEC_ID_R10K:
    return "r10k";
case CODEC_ID_MXPEG:
    return "mxpeg";
case CODEC_ID_LAGARITH:
    return "lagarith";
case CODEC_ID_PRORES:
    return "prores";
case CODEC_ID_JV:
    return "jv";
case CODEC_ID_DFA:
    return "dfa";
case CODEC_ID_WMV3IMAGE:
    return "wmv3image";
case CODEC_ID_VC1IMAGE:
    return "vc1image";
case CODEC_ID_UTVIDEO:
    return "utvideo";
case CODEC_ID_BMV_VIDEO:
    return "bmv_video";
case CODEC_ID_VBLE:
    return "vble";
case CODEC_ID_DXTORY:
    return "dxtory";
case CODEC_ID_V410:
    return "v410";
case CODEC_ID_XWD:
    return "xwd";
case CODEC_ID_CDXL:
    return "cdxl";
case CODEC_ID_XBM:
    return "xbm";
case CODEC_ID_ZEROCODEC:
    return "zerocodec";
case CODEC_ID_Y41P:
    return "y41p";
case CODEC_ID_ESCAPE130:
    return "escape130";
case CODEC_ID_EXR:
    return "exr";
case CODEC_ID_AVRP:
    return "avrp";
case CODEC_ID_G2M:
    return "g2m";
case CODEC_ID_AVUI:
    return "avui";
case CODEC_ID_AYUV:
    return "ayuv";
case CODEC_ID_V308:
    return "v308";
case CODEC_ID_V408:
    return "v408";
case CODEC_ID_YUV4:
    return "yuv4";
case CODEC_ID_PCM_S16LE:
    { extern AVCodec ff_pcm_s16le_decoder;
      return ff_pcm_s16le_decoder.name; }
case CODEC_ID_PCM_S16BE:
    return "pcm_s16be";
case CODEC_ID_PCM_U16LE:
    { extern AVCodec ff_pcm_u16le_decoder;
      return ff_pcm_u16le_decoder.name; }
case CODEC_ID_PCM_U16BE:
    return "pcm_u16be";
case CODEC_ID_PCM_S8:
    return "pcm_s8";
case CODEC_ID_PCM_U8:
    return "pcm_u8";
case CODEC_ID_PCM_MULAW:
    return "pcm_mulaw";
case CODEC_ID_PCM_ALAW:
    return "pcm_alaw";
case CODEC_ID_PCM_S32LE:
    return "pcm_s32le";
case CODEC_ID_PCM_S32BE:
    return "pcm_s32be";
case CODEC_ID_PCM_U32LE:
    return "pcm_u32le";
case CODEC_ID_PCM_U32BE:
    return "pcm_u32be";
case CODEC_ID_PCM_S24LE:
    return "pcm_s24le";
case CODEC_ID_PCM_S24BE:
    return "pcm_s24be";
case CODEC_ID_PCM_U24LE:
    return "pcm_u24le";
case CODEC_ID_PCM_U24BE:
    return "pcm_u24be";
case CODEC_ID_PCM_S24DAUD:
    return "pcm_s24daud";
case CODEC_ID_PCM_ZORK:
    return "pcm_zork";
case CODEC_ID_PCM_S16LE_PLANAR:
    return "pcm_s16le_planar";
case CODEC_ID_PCM_DVD:
    return "pcm_dvd";
case CODEC_ID_PCM_F32BE:
    return "pcm_f32be";
case CODEC_ID_PCM_F32LE:
    { extern AVCodec ff_pcm_f32le_decoder;
      return ff_pcm_f32le_decoder.name; }
case CODEC_ID_PCM_F64BE:
    return "pcm_f64be";
case CODEC_ID_PCM_F64LE:
    return "pcm_f64le";
case CODEC_ID_PCM_BLURAY:
    return "pcm_bluray";
case CODEC_ID_PCM_LXF:
    return "pcm_lxf";
case CODEC_ID_S302M:
    return "s302m";
case CODEC_ID_PCM_S8_PLANAR:
    return "pcm_s8_planar";
case CODEC_ID_ADPCM_IMA_QT:
    return "adpcm_ima_qt";
case CODEC_ID_ADPCM_IMA_WAV:
    return "adpcm_ima_wav";
case CODEC_ID_ADPCM_IMA_DK3:
    return "adpcm_ima_dk3";
case CODEC_ID_ADPCM_IMA_DK4:
    return "adpcm_ima_dk4";
case CODEC_ID_ADPCM_IMA_WS:
    return "adpcm_ima_ws";
case CODEC_ID_ADPCM_IMA_SMJPEG:
    return "adpcm_ima_smjpeg";
case CODEC_ID_ADPCM_MS:
    return "adpcm_ms";
case CODEC_ID_ADPCM_4XM:
    return "adpcm_4xm";
case CODEC_ID_ADPCM_XA:
    return "adpcm_xa";
case CODEC_ID_ADPCM_ADX:
    return "adpcm_adx";
case CODEC_ID_ADPCM_EA:
    return "adpcm_ea";
case CODEC_ID_ADPCM_G726:
    return "adpcm_g726";
case CODEC_ID_ADPCM_CT:
    return "adpcm_ct";
case CODEC_ID_ADPCM_SWF:
    return "adpcm_swf";
case CODEC_ID_ADPCM_YAMAHA:
    return "adpcm_yamaha";
case CODEC_ID_ADPCM_SBPRO_4:
    return "adpcm_sbpro_4";
case CODEC_ID_ADPCM_SBPRO_3:
    return "adpcm_sbpro_3";
case CODEC_ID_ADPCM_SBPRO_2:
    return "adpcm_sbpro_2";
case CODEC_ID_ADPCM_THP:
    return "adpcm_thp";
case CODEC_ID_ADPCM_IMA_AMV:
    return "adpcm_ima_amv";
case CODEC_ID_ADPCM_EA_R1:
    return "adpcm_ea_r1";
case CODEC_ID_ADPCM_EA_R3:
    return "adpcm_ea_r3";
case CODEC_ID_ADPCM_EA_R2:
    return "adpcm_ea_r2";
case CODEC_ID_ADPCM_IMA_EA_SEAD:
    return "adpcm_ima_ea_sead";
case CODEC_ID_ADPCM_IMA_EA_EACS:
    return "adpcm_ima_ea_eacs";
case CODEC_ID_ADPCM_EA_XAS:
    return "adpcm_ea_xas";
case CODEC_ID_ADPCM_EA_MAXIS_XA:
    return "adpcm_ea_maxis_xa";
case CODEC_ID_ADPCM_IMA_ISS:
    return "adpcm_ima_iss";
case CODEC_ID_ADPCM_G722:
    return "adpcm_g722";
case CODEC_ID_ADPCM_IMA_APC:
    return "adpcm_ima_apc";
case CODEC_ID_AMR_NB:
    return "amr_nb";
case CODEC_ID_AMR_WB:
    return "amr_wb";
case CODEC_ID_RA_144:
    return "ra_144";
case CODEC_ID_RA_288:
    return "ra_288";
case CODEC_ID_ROQ_DPCM:
    return "roq_dpcm";
case CODEC_ID_INTERPLAY_DPCM:
    return "interplay_dpcm";
case CODEC_ID_XAN_DPCM:
    return "xan_dpcm";
case CODEC_ID_SOL_DPCM:
    return "sol_dpcm";
case CODEC_ID_MP2:
    return "mp2";
case CODEC_ID_MP3:
    return "mp3";
case CODEC_ID_AAC:
    { extern AVCodec ff_aac_decoder;
      return ff_aac_decoder.name; }
case CODEC_ID_AC3:
    return "ac3";
case CODEC_ID_DTS:
    return "dts";
case CODEC_ID_VORBIS:
    return "vorbis";
case CODEC_ID_DVAUDIO:
    return "dvaudio";
case CODEC_ID_WMAV1:
    return "wmav1";
case CODEC_ID_WMAV2:
    return "wmav2";
case CODEC_ID_MACE3:
    return "mace3";
case CODEC_ID_MACE6:
    return "mace6";
case CODEC_ID_VMDAUDIO:
    return "vmdaudio";
case CODEC_ID_FLAC:
    return "flac";
case CODEC_ID_MP3ADU:
    return "mp3adu";
case CODEC_ID_MP3ON4:
    return "mp3on4";
case CODEC_ID_SHORTEN:
    return "shorten";
case CODEC_ID_ALAC:
    return "alac";
case CODEC_ID_WESTWOOD_SND1:
    return "westwood_snd1";
case CODEC_ID_GSM:
    return "gsm";
case CODEC_ID_QDM2:
    return "qdm2";
case CODEC_ID_COOK:
    return "cook";
case CODEC_ID_TRUESPEECH:
    return "truespeech";
case CODEC_ID_TTA:
    return "tta";
case CODEC_ID_SMACKAUDIO:
    return "smackaudio";
case CODEC_ID_QCELP:
    return "qcelp";
case CODEC_ID_WAVPACK:
    return "wavpack";
case CODEC_ID_DSICINAUDIO:
    return "dsicinaudio";
case CODEC_ID_IMC:
    return "imc";
case CODEC_ID_MUSEPACK7:
    return "musepack7";
case CODEC_ID_MLP:
    return "mlp";
case CODEC_ID_GSM_MS:
    return "gsm_ms";
case CODEC_ID_ATRAC3:
    return "atrac3";
case CODEC_ID_VOXWARE:
    return "voxware";
case CODEC_ID_APE:
    return "ape";
case CODEC_ID_NELLYMOSER:
    return "nellymoser";
case CODEC_ID_MUSEPACK8:
    return "musepack8";
case CODEC_ID_SPEEX:
    return "speex";
case CODEC_ID_WMAVOICE:
    return "wmavoice";
case CODEC_ID_WMAPRO:
    return "wmapro";
case CODEC_ID_WMALOSSLESS:
    return "wmalossless";
case CODEC_ID_ATRAC3P:
    return "atrac3p";
case CODEC_ID_EAC3:
    return "eac3";
case CODEC_ID_SIPR:
    return "sipr";
case CODEC_ID_MP1:
    return "mp1";
case CODEC_ID_TWINVQ:
    return "twinvq";
case CODEC_ID_TRUEHD:
    return "truehd";
case CODEC_ID_MP4ALS:
    return "mp4als";
case CODEC_ID_ATRAC1:
    return "atrac1";
case CODEC_ID_BINKAUDIO_RDFT:
    return "binkaudio_rdft";
case CODEC_ID_BINKAUDIO_DCT:
    return "binkaudio_dct";
case CODEC_ID_AAC_LATM:
    return "aac_latm";
case CODEC_ID_QDMC:
    return "qdmc";
case CODEC_ID_CELT:
    return "celt";
case CODEC_ID_G723_1:
    return "g723_1";
case CODEC_ID_G729:
    return "g729";
case CODEC_ID_8SVX_EXP:
    return "8svx_exp";
case CODEC_ID_8SVX_FIB:
    return "8svx_fib";
case CODEC_ID_BMV_AUDIO:
    return "bmv_audio";
case CODEC_ID_RALF:
    return "ralf";
case CODEC_ID_FFWAVESYNTH:
    return "ffwavesynth";
case CODEC_ID_8SVX_RAW:
    return "8svx_raw";
case CODEC_ID_SONIC:
    return "sonic";
case CODEC_ID_SONIC_LS:
    return "sonic_ls";
case CODEC_ID_DVD_SUBTITLE:
    return "dvd_subtitle";
case CODEC_ID_DVB_SUBTITLE:
    return "dvb_subtitle";
case CODEC_ID_TEXT:
    return "text";
case CODEC_ID_XSUB:
    return "xsub";
case CODEC_ID_SSA:
    return "ssa";
case CODEC_ID_MOV_TEXT:
    return "mov_text";
case CODEC_ID_HDMV_PGS_SUBTITLE:
    return "hdmv_pgs_subtitle";
case CODEC_ID_DVB_TELETEXT:
    return "dvb_teletext";
case CODEC_ID_SRT:
    return "srt";
case CODEC_ID_MICRODVD:
    return "microdvd";
case CODEC_ID_EIA_608:
    return "eia_608";
case CODEC_ID_JACOSUB:
    return "jacosub";
case CODEC_ID_TTF:
    return "ttf";
case CODEC_ID_BINTEXT:
    return "bintext";
case CODEC_ID_XBIN:
    return "xbin";
case CODEC_ID_IDF:
    return "idf";
case CODEC_ID_PROBE:
    return "probe";
case CODEC_ID_MPEG2TS:
    return "mpeg2ts";
case CODEC_ID_MPEG4SYSTEMS:
    return "mpeg4systems";
case CODEC_ID_FFMETADATA:
    return "ffmetadata";


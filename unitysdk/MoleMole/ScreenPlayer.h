#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/NFLPDCBEDLI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

class AGOFALFBGPG;
class FNLBCCCENMF;
class MPKBDIJDMAP;
class OODDDHHGKIJ;
class ScreenPlayData;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_SCREENPLAYER_ABDIINAJDPB_OFFSET UNITYSDK_OFFSET(0x18114270)
#define MOLEMOLE_SCREENPLAYER_ACIENLIHEOK_OFFSET UNITYSDK_OFFSET(0x18112D40)
#define MOLEMOLE_SCREENPLAYER_AHOAKJKCKIA_OFFSET UNITYSDK_OFFSET(0x18118860)
#define MOLEMOLE_SCREENPLAYER_ALIEKHJEFON_OFFSET UNITYSDK_OFFSET(0x18113D90)
#define MOLEMOLE_SCREENPLAYER_BDNNGHOLNCI_OFFSET UNITYSDK_OFFSET(0x18113DD0)
#define MOLEMOLE_SCREENPLAYER_BFECOFGDEMH_OFFSET UNITYSDK_OFFSET(0x18112DE0)
#define MOLEMOLE_SCREENPLAYER_BKGODGGKMKK_OFFSET UNITYSDK_OFFSET(0x18111350)
#define MOLEMOLE_SCREENPLAYER_BKPKBOECIEE_OFFSET UNITYSDK_OFFSET(0x18113D20)
#define MOLEMOLE_SCREENPLAYER_BMLHPIIHFEJ_OFFSET UNITYSDK_OFFSET(0x181124B0)
#define MOLEMOLE_SCREENPLAYER_BMPCACHFBBH_OFFSET UNITYSDK_OFFSET(0x181137C0)
#define MOLEMOLE_SCREENPLAYER_BOONPAHEPJH_OFFSET UNITYSDK_OFFSET(0x18111080)
#define MOLEMOLE_SCREENPLAYER_BPIFIKOIODH_OFFSET UNITYSDK_OFFSET(0x18112510)
#define MOLEMOLE_SCREENPLAYER_CFBGEKHHHGA_OFFSET UNITYSDK_OFFSET(0x181187B0)
#define MOLEMOLE_SCREENPLAYER_CGIOHHNBAOM_OFFSET UNITYSDK_OFFSET(0x18117920)
#define MOLEMOLE_SCREENPLAYER_CIGODFNMFGD_OFFSET UNITYSDK_OFFSET(0x18112450)
#define MOLEMOLE_SCREENPLAYER_CIKHALFCMPB_OFFSET UNITYSDK_OFFSET(0x18118770)
#define MOLEMOLE_SCREENPLAYER_CNNDJGFKJCJ_OFFSET UNITYSDK_OFFSET(0x181136B0)
#define MOLEMOLE_SCREENPLAYER_DBMEJKIHEOJ_OFFSET UNITYSDK_OFFSET(0x18113830)
#define MOLEMOLE_SCREENPLAYER_DHAGLCPIBON_OFFSET UNITYSDK_OFFSET(0x18113640)
#define MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18112B60)
#define MOLEMOLE_SCREENPLAYER_DLJECMKBIFJ_OFFSET UNITYSDK_OFFSET(0x18113920)
#define MOLEMOLE_SCREENPLAYER_DMHCDHHEPAD_OFFSET UNITYSDK_OFFSET(0x18113670)
#define MOLEMOLE_SCREENPLAYER_DNCDEKOFKFB_OFFSET UNITYSDK_OFFSET(0x181120C0)
#define MOLEMOLE_SCREENPLAYER_DOABCEAFNJH_OFFSET UNITYSDK_OFFSET(0x18110870)
#define MOLEMOLE_SCREENPLAYER_FDPONKALNPI_OFFSET UNITYSDK_OFFSET(0x18118090)
#define MOLEMOLE_SCREENPLAYER_GCAPCADKEHK_OFFSET UNITYSDK_OFFSET(0x181138C0)
#define MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x18110330)
#define MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x181103B0)
#define MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18112D80)
#define MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x18110350)
#define MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x181103D0)
#define MOLEMOLE_SCREENPLAYER_GFKLEPDMBJD_OFFSET UNITYSDK_OFFSET(0x181187F0)
#define MOLEMOLE_SCREENPLAYER_HDPDHHAMEGC_OFFSET UNITYSDK_OFFSET(0x18112AF0)
#define MOLEMOLE_SCREENPLAYER_HEJDFIKJLOC_OFFSET UNITYSDK_OFFSET(0x18114190)
#define MOLEMOLE_SCREENPLAYER_HGAJDIGNGGE_OFFSET UNITYSDK_OFFSET(0x18118A70)
#define MOLEMOLE_SCREENPLAYER_HHCDABCOILJ_1_OFFSET UNITYSDK_OFFSET(0x18113F20)
#define MOLEMOLE_SCREENPLAYER_HHCDABCOILJ_OFFSET UNITYSDK_OFFSET(0x18113E00)
#define MOLEMOLE_SCREENPLAYER_HNCCDKJLKMN_OFFSET UNITYSDK_OFFSET(0x181178D0)
#define MOLEMOLE_SCREENPLAYER_HOCCOFALHPO_1_OFFSET UNITYSDK_OFFSET(0x18118570)
#define MOLEMOLE_SCREENPLAYER_HOCCOFALHPO_OFFSET UNITYSDK_OFFSET(0x181141A0)
#define MOLEMOLE_SCREENPLAYER_IBMNGCMJMNN_OFFSET UNITYSDK_OFFSET(0x18112F30)
#define MOLEMOLE_SCREENPLAYER_IJNJMGAOCMF_OFFSET UNITYSDK_OFFSET(0x18118670)
#define MOLEMOLE_SCREENPLAYER_IMKOGBFJCKB_OFFSET UNITYSDK_OFFSET(0x18110D80)
#define MOLEMOLE_SCREENPLAYER_LCJDMHNMNHJ_OFFSET UNITYSDK_OFFSET(0x18113C80)
#define MOLEMOLE_SCREENPLAYER_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x181188F0)
#define MOLEMOLE_SCREENPLAYER_LFAOEMMAHAB_OFFSET UNITYSDK_OFFSET(0x18114100)
#define MOLEMOLE_SCREENPLAYER_LGELGNIINJH_OFFSET UNITYSDK_OFFSET(0x18113EA0)
#define MOLEMOLE_SCREENPLAYER_LLCIKNLNBOF_OFFSET UNITYSDK_OFFSET(0x18113B40)
#define MOLEMOLE_SCREENPLAYER_LLONPGAAOPE_OFFSET UNITYSDK_OFFSET(0x181133A0)
#define MOLEMOLE_SCREENPLAYER_LOCMHOGEPJP_1_OFFSET UNITYSDK_OFFSET(0x18118000)
#define MOLEMOLE_SCREENPLAYER_LOCMHOGEPJP_OFFSET UNITYSDK_OFFSET(0x18113FC0)
#define MOLEMOLE_SCREENPLAYER_MABCJOIDLHK_OFFSET UNITYSDK_OFFSET(0x18113A80)
#define MOLEMOLE_SCREENPLAYER_MBIHBHMKABA_OFFSET UNITYSDK_OFFSET(0x18114070)
#define MOLEMOLE_SCREENPLAYER_MDJGGPNGGFE_OFFSET UNITYSDK_OFFSET(0x18117830)
#define MOLEMOLE_SCREENPLAYER_MGIDIILIDFM_OFFSET UNITYSDK_OFFSET(0x181106C0)
#define MOLEMOLE_SCREENPLAYER_NCFJEBIOMHD_OFFSET UNITYSDK_OFFSET(0x18112220)
#define MOLEMOLE_SCREENPLAYER_NJJNMLJNBPD_OFFSET UNITYSDK_OFFSET(0x181180D0)
#define MOLEMOLE_SCREENPLAYER_NMMKKJKANFL_OFFSET UNITYSDK_OFFSET(0x18111A40)
#define MOLEMOLE_SCREENPLAYER_OJBBMDEIFFE_OFFSET UNITYSDK_OFFSET(0x181112D0)
#define MOLEMOLE_SCREENPLAYER_ONJDIFIEMKO_OFFSET UNITYSDK_OFFSET(0x18117F80)
#define MOLEMOLE_SCREENPLAYER_PAJILBMBINF_OFFSET UNITYSDK_OFFSET(0x18113730)
#define MOLEMOLE_SCREENPLAYER_PEIMBACAHFG_OFFSET UNITYSDK_OFFSET(0x18112740)
#define MOLEMOLE_SCREENPLAYER_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x181119E0)
#define MOLEMOLE_SCREENPLAYER_PHJAHBPBGIB_OFFSET UNITYSDK_OFFSET(0x18118730)
#define MOLEMOLE_SCREENPLAYER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18111DC0)
#define MOLEMOLE_SCREENPLAYER_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x18110540)
#define MOLEMOLE_SCREENPLAYER_PLOAKKAOBLE_OFFSET UNITYSDK_OFFSET(0x18118F10)
#define MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x18110340)
#define MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x181103C0)
#define MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x181103E0)
#define MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x181103F0)
#define MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181135C0)
#define MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18110F90)
#define MOLEMOLE_SCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x181105A0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TypeDefinitionIndex = 72396;

	class ScreenPlayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_BlendKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x52130);
		}
		static ::System::String** StaticGet_Value()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x52138);
		}
		static ::System::String** StaticGet_Hue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x52140);
		}
		static ::System::String** StaticGet_Saturation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x52148);
		}
		static ::System::Int32* StaticGet__ScreenMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x13B10);
		}
		// static const ::System::String* CRIWARE_MAT_KEY; // 0x0
		::FNLBCCCENMF* _lodMaterialProxy; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x18
		::NFLPDCBEDLI _lodType; // 0x20
		::MoleMole::StaticSceneObjectListLoopType playMode; // 0x24
		::System::Collections::Generic::List_1<::ScreenPlayData*>* quests; // 0x28
		::System::Boolean isPlaying; // 0x30
		::System::Byte _padding0[0x7];
		::ScreenPlayData* _currentPlayData_k__BackingField; // 0x38
		::System::Int32 currentPlayIndex; // 0x40
		::System::Boolean mpbFullCopy; // 0x44
		::System::Byte _padding1[0x3];
		::System::Action* playSuccess; // 0x48
		::System::Action* playFaild; // 0x50
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoPrepared; // 0x58
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoStarted; // 0x60
		::MoleMole::ScreenPlayer_TextureSheet* _playerTextureSheet; // 0x68
		::OODDDHHGKIJ* _blendTextureSheetVeUpdater; // 0x70
		::IMBMPPCPHOD ScreenMatInfoNew; // 0x78
		::IMBMPPCPHOD ScreenMatInfoOld; // 0x5A0
		::MoleMole::IVideoPlayer* _videoPlayer; // 0xAC8
		::Foundation::AssetRequestHandle _videoRequest; // 0xAD0
		::System::Boolean isPlayingVideo; // 0xAF0
		::System::Boolean openAsyncLoadNextTexture; // 0xAF1
		::System::Boolean isDebug; // 0xAF2
		::System::Byte _padding2[0x5];
		::UnityEngine::GameObject* soundStaticEmitter; // 0xAF8
		::System::Boolean muteSound; // 0xB00
		::System::Boolean _hasVideoAudio; // 0xB01
		::System::Byte _padding3[0x6];
		::System::String* _currentVideoStopEvent; // 0xB08
		::System::Boolean switchNotClean; // 0xB10
		::System::Byte _padding4[0x7];
		::System::String* ownerGameobjectPath; // 0xB18
		::System::Single cacheForceWrapRepeat; // 0xB20
		::System::Boolean IsNeedFindRender; // 0xB24
		::System::Boolean _ForceUpdate_k__BackingField; // 0xB25
		::System::Byte _padding5[0x2];
		::UnityEngine::GameObject* _ScreenGO_k__BackingField; // 0xB28
		::Foundation::Coroutine::CoroutineHandle delayPlay; // 0xB30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean AIFODHOKGBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET))(this, OCFHGOGFGPE, AIFODHOKGBH);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET))();
		}

		::ScreenPlayData* get_currentPlayData()
		{
			return ((::ScreenPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET))(this);
		}

		::System::Void set_currentPlayData(::ScreenPlayData* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_ForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void set_ForceUpdate(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::GameObject* get_ScreenGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET))(this);
		}

		::System::Void set_ScreenGO(::UnityEngine::GameObject* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Update(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void MGIDIILIDFM(::UnityEngine::GameObject* AMNIHACKELI, ::System::Boolean AIFODHOKGBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_MGIDIILIDFM_OFFSET))(this, AMNIHACKELI, AIFODHOKGBH);
		}

		::System::Void BOONPAHEPJH(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BOONPAHEPJH_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void BKGODGGKMKK(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BKGODGGKMKK_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void PHOADBJGFBE(::System::Boolean IOKNPLAMIKB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PHOADBJGFBE_OFFSET))(this, IOKNPLAMIKB);
		}

		::System::Void CIGODFNMFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_CIGODFNMFGD_OFFSET))(this);
		}

		::System::Void BMLHPIIHFEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BMLHPIIHFEJ_OFFSET))(this);
		}

		::System::Void BPIFIKOIODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BPIFIKOIODH_OFFSET))(this);
		}

		::System::Void HDPDHHAMEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HDPDHHAMEGC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void ACIENLIHEOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_ACIENLIHEOK_OFFSET))(this);
		}

		::UnityEngine::Texture* get_GetRenderTargetTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void BFECOFGDEMH(::MoleMole::Config::BaseConfigSoundAction* HMOMCMBDPIJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseConfigSoundAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BFECOFGDEMH_OFFSET))(this, HMOMCMBDPIJ);
		}

		::System::Void LLONPGAAOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LLONPGAAOPE_OFFSET))(this);
		}

		::System::Void DHAGLCPIBON(::MPKBDIJDMAP* JNDDJMAHNAI, ::MoleMole::HollowPieceBlendMode MDLNMDJMMJP)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DHAGLCPIBON_OFFSET))(this, JNDDJMAHNAI, MDLNMDJMMJP);
		}

		::System::Void DMHCDHHEPAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DMHCDHHEPAD_OFFSET))(this);
		}

		::System::String* CNNDJGFKJCJ(::System::String* HCDNICNAKMD)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_CNNDJGFKJCJ_OFFSET))(this, HCDNICNAKMD);
		}

		::System::Void PAJILBMBINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PAJILBMBINF_OFFSET))(this);
		}

		::System::Void NMMKKJKANFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_NMMKKJKANFL_OFFSET))(this);
		}

		::System::Boolean BMPCACHFBBH(::System::Single IAKPGBCAAKM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BMPCACHFBBH_OFFSET))(this, IAKPGBCAAKM);
		}

		::System::Int32 OJBBMDEIFFE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_OJBBMDEIFFE_OFFSET))(this);
		}

		::System::Void DBMEJKIHEOJ(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DBMEJKIHEOJ_OFFSET))(this, JGPIGFLIDOJ);
		}

		::System::Void GCAPCADKEHK(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GCAPCADKEHK_OFFSET))(this, KHGFAKJKDGG);
		}

		::System::Void MABCJOIDLHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_MABCJOIDLHK_OFFSET))(this);
		}

		::System::Void LCJDMHNMNHJ(::MoleMole::IVideoPlayer* KHGFAKJKDGG, ::System::String* NAPFALLANDL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LCJDMHNMNHJ_OFFSET))(this, KHGFAKJKDGG, NAPFALLANDL);
		}

		::System::Boolean BKPKBOECIEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BKPKBOECIEE_OFFSET))(this);
		}

		::System::Void ALIEKHJEFON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_ALIEKHJEFON_OFFSET))(this);
		}

		::System::Void BDNNGHOLNCI(::MPKBDIJDMAP* JNDDJMAHNAI, ::UnityEngine::Vector4 HDPGPBNINGA, ::System::Int32 HBJOLKHGGDD)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_BDNNGHOLNCI_OFFSET))(this, JNDDJMAHNAI, HDPGPBNINGA, HBJOLKHGGDD);
		}

		::System::Void HHCDABCOILJ(::System::String* IHJPDNINDEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HHCDABCOILJ_OFFSET))(this, IHJPDNINDEC);
		}

		::System::Void LGELGNIINJH(::System::Boolean EBFCACIEKBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LGELGNIINJH_OFFSET))(this, EBFCACIEKBC);
		}

		::System::Void HHCDABCOILJ_1(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HHCDABCOILJ_1_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void LOCMHOGEPJP(::System::Collections::Generic::List_1<::ScreenPlayData*>* OOBOMJFEMEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LOCMHOGEPJP_OFFSET))(this, OOBOMJFEMEA);
		}

		::System::Void PEIMBACAHFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PEIMBACAHFG_OFFSET))(this);
		}

		::UnityEngine::Renderer* MBIHBHMKABA()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_MBIHBHMKABA_OFFSET))(this);
		}

		::System::Void PGHAJOMNDDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PGHAJOMNDDJ_OFFSET))(this);
		}

		::System::Void LFAOEMMAHAB(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LFAOEMMAHAB_OFFSET))(this, JGPIGFLIDOJ);
		}

		::System::Void HEJDFIKJLOC(::System::Boolean IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HEJDFIKJLOC_OFFSET))(this, IGAAKDOIPNN);
		}

		::System::Void HOCCOFALHPO(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HOCCOFALHPO_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Boolean ABDIINAJDPB(::UnityEngine::Material* DHFKLMDOOJO, ::IMBMPPCPHOD ODOLPFOAFAG, ::IMBMPPCPHOD MJODFDBNJIP, ::AGOFALFBGPG* JFPDJGAMELP, ::System::Boolean NPPMJEIPMFC, ::System::Int32 PJIDDIHFDOO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::IMBMPPCPHOD, ::IMBMPPCPHOD, ::AGOFALFBGPG*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_ABDIINAJDPB_OFFSET))(this, DHFKLMDOOJO, ODOLPFOAFAG, MJODFDBNJIP, JFPDJGAMELP, NPPMJEIPMFC, PJIDDIHFDOO);
		}

		::System::Boolean DOABCEAFNJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DOABCEAFNJH_OFFSET))(this);
		}

		::System::Void IBMNGCMJMNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_IBMNGCMJMNN_OFFSET))(this);
		}

		static ::System::Boolean MDJGGPNGGFE(::UnityEngine::LOD LLLLNJFJGAI)
		{
			return ((::System::Boolean(*)(::UnityEngine::LOD))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_MDJGGPNGGFE_OFFSET))(LLLLNJFJGAI);
		}

		::System::Boolean PIJDOJAKFGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PIJDOJAKFGK_OFFSET))(this);
		}

		::System::Void HNCCDKJLKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HNCCDKJLKMN_OFFSET))(this);
		}

		::System::Void DLJECMKBIFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DLJECMKBIFJ_OFFSET))(this);
		}

		::System::Void CGIOHHNBAOM(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_CGIOHHNBAOM_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Boolean ONJDIFIEMKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_ONJDIFIEMKO_OFFSET))(this);
		}

		::System::Void LOCMHOGEPJP_1(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LOCMHOGEPJP_1_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Collections::Generic::List_1<::ScreenPlayData*>* FDPONKALNPI()
		{
			return ((::System::Collections::Generic::List_1<::ScreenPlayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_FDPONKALNPI_OFFSET))(this);
		}

		::System::Void LLCIKNLNBOF(::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LLCIKNLNBOF_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void NJJNMLJNBPD(::ScreenPlayData* LJBPECKCCEA, ::System::Action* DGHFMHFOOEI, ::System::Action* BIBGCJMCKEL)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_NJJNMLJNBPD_OFFSET))(this, LJBPECKCCEA, DGHFMHFOOEI, BIBGCJMCKEL);
		}

		::System::Void HOCCOFALHPO_1(::System::Collections::Generic::List_1<::ScreenPlayData*>* OOBOMJFEMEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HOCCOFALHPO_1_OFFSET))(this, OOBOMJFEMEA);
		}

		::System::Void DNCDEKOFKFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DNCDEKOFKFB_OFFSET))(this);
		}

		::System::Void IJNJMGAOCMF(::System::Boolean AHEAEIMIJJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_IJNJMGAOCMF_OFFSET))(this, AHEAEIMIJJK);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* PHJAHBPBGIB()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PHJAHBPBGIB_OFFSET))(this);
		}

		::System::Boolean IMKOGBFJCKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_IMKOGBFJCKB_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer_TextureSheet* CIKHALFCMPB()
		{
			return ((::MoleMole::ScreenPlayer_TextureSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_CIKHALFCMPB_OFFSET))(this);
		}

		::System::Void NCFJEBIOMHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_NCFJEBIOMHD_OFFSET))(this);
		}

		::System::Void CFBGEKHHHGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_CFBGEKHHHGA_OFFSET))(this);
		}

		::System::Void GFKLEPDMBJD(::MoleMole::StaticSceneObjectListLoopType BNHNGJKNJJD, ::System::Int32 ABHBKFJKINO, ::System::Boolean IOKNPLAMIKB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticSceneObjectListLoopType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GFKLEPDMBJD_OFFSET))(this, BNHNGJKNJJD, ABHBKFJKINO, IOKNPLAMIKB);
		}

		::System::Void AHOAKJKCKIA(::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* FHGKPKNDGBL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_AHOAKJKCKIA_OFFSET))(this, FHGKPKNDGBL);
		}

		::System::Void LCJEELHBNHG(::System::Action* DGHFMHFOOEI, ::System::Action* JJNPJAGKIHN, ::System::Boolean EPHIHEKNEHA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_LCJEELHBNHG_OFFSET))(this, DGHFMHFOOEI, JJNPJAGKIHN, EPHIHEKNEHA);
		}

		::System::Void HGAJDIGNGGE(::MoleMole::BlendTextureSheetData* JPFIBOCMHOL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_HGAJDIGNGGE_OFFSET))(this, JPFIBOCMHOL);
		}

		::System::Void PLOAKKAOBLE(::System::Int32 ABHBKFJKINO, ::ScreenPlayData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_PLOAKKAOBLE_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA);
		}
	};
}

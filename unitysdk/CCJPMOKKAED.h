#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace CriWare { class CriManaMovieController; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define CCJPMOKKAED_AAOPOPPGDDI_OFFSET UNITYSDK_OFFSET(0xC7478B0)
#define CCJPMOKKAED_AHGBKACOFIB_OFFSET UNITYSDK_OFFSET(0xC748D20)
#define CCJPMOKKAED_BACCPKFGPMN_OFFSET UNITYSDK_OFFSET(0xC748E90)
#define CCJPMOKKAED_BHNPIEJHKDE_OFFSET UNITYSDK_OFFSET(0xC7497F0)
#define CCJPMOKKAED_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC747CA0)
#define CCJPMOKKAED_CTOR_OFFSET UNITYSDK_OFFSET(0xC7477D0)
#define CCJPMOKKAED_HKHAIJGAJJL_OFFSET UNITYSDK_OFFSET(0xC7494B0)
#define CCJPMOKKAED_IGPGCCGFPIN_OFFSET UNITYSDK_OFFSET(0xC747E50)
#define CCJPMOKKAED_INMKNBHDCCP_OFFSET UNITYSDK_OFFSET(0xC7496E0)
#define CCJPMOKKAED_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xC748270)
#define CCJPMOKKAED_JIBNCHBEIKP_OFFSET UNITYSDK_OFFSET(0xC748650)
#define CCJPMOKKAED_JOOFNCCDICG_OFFSET UNITYSDK_OFFSET(0xC749140)
#define CCJPMOKKAED_KGMMJLAFIHP_OFFSET UNITYSDK_OFFSET(0xC7484D0)
#define CCJPMOKKAED_LMPFJFGDOFM_OFFSET UNITYSDK_OFFSET(0xC747D40)
#define CCJPMOKKAED_MANEKDKCDPA_OFFSET UNITYSDK_OFFSET(0xC749550)
#define CCJPMOKKAED_MIGMMECAPIG_OFFSET UNITYSDK_OFFSET(0xC7483C0)
#define CCJPMOKKAED_NBMJJDJDLPD_OFFSET UNITYSDK_OFFSET(0xC748840)
#define CCJPMOKKAED_NIJGGKACONF_OFFSET UNITYSDK_OFFSET(0xC749340)
#define CCJPMOKKAED_NMHKNECCBGI_OFFSET UNITYSDK_OFFSET(0xC7487B0)
#define CCJPMOKKAED_NMMELPPIKDH_OFFSET UNITYSDK_OFFSET(0xC748190)
#define CCJPMOKKAED_ODLOCJLCJDJ_OFFSET UNITYSDK_OFFSET(0xC748520)
#define CCJPMOKKAED_OEFGCKFEJDO_OFFSET UNITYSDK_OFFSET(0xC748DD0)
#define CCJPMOKKAED_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC748080)
#define CCJPMOKKAED_PDPPCJJPHBD_OFFSET UNITYSDK_OFFSET(0xC7492C0)
#define CCJPMOKKAED_PFDIFOIKEHK_OFFSET UNITYSDK_OFFSET(0xC7482C0)
#define CCJPMOKKAED__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0xC749AC0)
#define CCJPMOKKAED__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0xC749AD0)
#define CCJPMOKKAED__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0xC749AA0)

	class CCJPMOKKAED : public ::System::Object
	{
	public:
		::CriWare::CriManaMovieController* PECHJKPMGLJ; // 0x10
		::System::Action* MJNODCEJEKN; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* MFGKNIEHDBD; // 0x20
		::CriWare::CriManaMovieController* OJLDDOIMCAF; // 0x28
		::RPG::GameCore::PlayVideoSequence* BDDJPHFIIPK; // 0x30
		::UnityEngine::Coroutine* NKLPFEFGBJK; // 0x38
		::UnityEngine::Coroutine* DBLANGNGFJD; // 0x40
		::Il2CppArray<::CriWare::CriManaMovieController*>* KFGHKHGLBMM; // 0x48
		::UnityEngine::MeshRenderer* GKJEDHMABID; // 0x50
		::UnityEngine::GameObject* FICBJLNBKLH; // 0x58
		::System::Action* BPLOKGHNFCD; // 0x60
		::System::Int32 LNMNOOFDBKJ; // 0x68
		::System::Int32 DMAPPGGHNAJ; // 0x6C
		::System::Int32 IMCMEPAPHMC; // 0x70
		::System::UInt32 GJFEGINLIPF; // 0x74
		::CriWare::CriMana::Player_Status GHHGNIHGOBC; // 0x78
		::System::Boolean ONJLLJIPLHB; // 0x7C
		::System::Boolean CBEECNAJMLA; // 0x7D
		::System::Boolean GABMPMNHFNG; // 0x7E
		::System::Byte _padding0[0x1];
		::System::UInt32 EFAFKOCCPAI; // 0x80
		::System::Int32 MHGNBOFDHIJ; // 0x84
		::System::Int32 PHHHENIPEIJ; // 0x88
		// static const ::System::Object KDEADIEJIDF; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PlayVideoSequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CCJPMOKKAED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJPMOKKAED_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void KGMMJLAFIHP(::RPG::GameCore::PlayVideoSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CCJPMOKKAED_KGMMJLAFIHP_OFFSET))(this, a1);
		}

		::System::Void ODLOCJLCJDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJPMOKKAED_ODLOCJLCJDJ_OFFSET))(this, a1);
		}

		::System::Void JIBNCHBEIKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJPMOKKAED_JIBNCHBEIKP_OFFSET))(this, a1);
		}

		::System::Void AAOPOPPGDDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_AAOPOPPGDDI_OFFSET))(this);
		}

		::System::Void IGPGCCGFPIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_IGPGCCGFPIN_OFFSET))(this);
		}

		::System::Void NMHKNECCBGI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCJPMOKKAED_NMHKNECCBGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AHGBKACOFIB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJPMOKKAED_AHGBKACOFIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PFDIFOIKEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_PFDIFOIKEHK_OFFSET))(this);
		}

		::System::Void OEFGCKFEJDO(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CCJPMOKKAED_OEFGCKFEJDO_OFFSET))(this, a1);
		}

		::System::Void BACCPKFGPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_BACCPKFGPMN_OFFSET))(this);
		}

		::System::Void LMPFJFGDOFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_LMPFJFGDOFM_OFFSET))(this);
		}

		::System::Void MIGMMECAPIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_MIGMMECAPIG_OFFSET))(this);
		}

		::System::Void JOOFNCCDICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_JOOFNCCDICG_OFFSET))(this);
		}

		::System::Void NIJGGKACONF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_NIJGGKACONF_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PDPPCJJPHBD()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_PDPPCJJPHBD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* HKHAIJGAJJL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCJPMOKKAED_HKHAIJGAJJL_OFFSET))(this, a1, a2);
		}

		::System::Boolean MANEKDKCDPA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CCJPMOKKAED_MANEKDKCDPA_OFFSET))(this, a1, a2);
		}

		::System::Void NMMELPPIKDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_NMMELPPIKDH_OFFSET))(this);
		}

		::System::Void NBMJJDJDLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_NBMJJDJDLPD_OFFSET))(this);
		}

		::System::Void BHNPIEJHKDE(::RPG::GameCore::VideoSequenceItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoSequenceItem*))((::PBYTE)hIl2Cpp + CCJPMOKKAED_BHNPIEJHKDE_OFFSET))(this, a1);
		}

		::System::Void INMKNBHDCCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED_INMKNBHDCCP_OFFSET))(this);
		}

		::System::Boolean _WaitReStartPlayVideo_b__37_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET))(this);
		}

		::System::Void _OnVideoBegin_b__46_0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CCJPMOKKAED__ONVIDEOBEGIN_B__46_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnVideoBegin_b__46_1(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CCJPMOKKAED__ONVIDEOBEGIN_B__46_1_OFFSET))(this, a1, a2, a3);
		}

	};

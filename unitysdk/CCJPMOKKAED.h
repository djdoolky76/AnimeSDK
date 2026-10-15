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
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define CCJPMOKKAED_AAOPOPPGDDI_OFFSET UNITYSDK_OFFSET(0xC744940)
#define CCJPMOKKAED_AHGBKACOFIB_OFFSET UNITYSDK_OFFSET(0xC745DC0)
#define CCJPMOKKAED_BACCPKFGPMN_OFFSET UNITYSDK_OFFSET(0xC745F30)
#define CCJPMOKKAED_BHNPIEJHKDE_OFFSET UNITYSDK_OFFSET(0xC746880)
#define CCJPMOKKAED_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC744D30)
#define CCJPMOKKAED_CTOR_OFFSET UNITYSDK_OFFSET(0xC744860)
#define CCJPMOKKAED_HKHAIJGAJJL_OFFSET UNITYSDK_OFFSET(0xC746550)
#define CCJPMOKKAED_IGPGCCGFPIN_OFFSET UNITYSDK_OFFSET(0xC744EE0)
#define CCJPMOKKAED_INMKNBHDCCP_OFFSET UNITYSDK_OFFSET(0xC746780)
#define CCJPMOKKAED_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xC745310)
#define CCJPMOKKAED_JIBNCHBEIKP_OFFSET UNITYSDK_OFFSET(0xC7456F0)
#define CCJPMOKKAED_JOOFNCCDICG_OFFSET UNITYSDK_OFFSET(0xC7461E0)
#define CCJPMOKKAED_KGMMJLAFIHP_OFFSET UNITYSDK_OFFSET(0xC745570)
#define CCJPMOKKAED_LMPFJFGDOFM_OFFSET UNITYSDK_OFFSET(0xC744DD0)
#define CCJPMOKKAED_MANEKDKCDPA_OFFSET UNITYSDK_OFFSET(0xC7465F0)
#define CCJPMOKKAED_MIGMMECAPIG_OFFSET UNITYSDK_OFFSET(0xC745460)
#define CCJPMOKKAED_NBMJJDJDLPD_OFFSET UNITYSDK_OFFSET(0xC7458E0)
#define CCJPMOKKAED_NIJGGKACONF_OFFSET UNITYSDK_OFFSET(0xC7463E0)
#define CCJPMOKKAED_NMHKNECCBGI_OFFSET UNITYSDK_OFFSET(0xC745850)
#define CCJPMOKKAED_NMMELPPIKDH_OFFSET UNITYSDK_OFFSET(0xC745230)
#define CCJPMOKKAED_ODLOCJLCJDJ_OFFSET UNITYSDK_OFFSET(0xC7455C0)
#define CCJPMOKKAED_OEFGCKFEJDO_OFFSET UNITYSDK_OFFSET(0xC745E70)
#define CCJPMOKKAED_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC745110)
#define CCJPMOKKAED_PDPPCJJPHBD_OFFSET UNITYSDK_OFFSET(0xC746360)
#define CCJPMOKKAED_PFDIFOIKEHK_OFFSET UNITYSDK_OFFSET(0xC745360)
#define CCJPMOKKAED__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0xC746B40)
#define CCJPMOKKAED__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0xC746B50)
#define CCJPMOKKAED__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0xC746B20)

inline static constexpr unsigned int CCJPMOKKAED_TypeDefinitionIndex = 73215;

	class CCJPMOKKAED : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* NKLPFEFGBJK; // 0x10
		::Il2CppArray<::CriWare::CriManaMovieController*>* KFGHKHGLBMM; // 0x18
		::CriWare::CriManaMovieController* OJLDDOIMCAF; // 0x20
		::UnityEngine::Coroutine* DBLANGNGFJD; // 0x28
		::RPG::Client::OpenWorld::StreamingItemData* MFGKNIEHDBD; // 0x30
		::RPG::GameCore::PlayVideoSequence* BDDJPHFIIPK; // 0x38
		::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* MJNODCEJEKN; // 0x40
		::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* BPLOKGHNFCD; // 0x48
		::UnityEngine::MeshRenderer* GKJEDHMABID; // 0x50
		::CriWare::CriManaMovieController* PECHJKPMGLJ; // 0x58
		::UnityEngine::GameObject* FICBJLNBKLH; // 0x60
		::System::UInt32 GJFEGINLIPF; // 0x68
		::System::Int32 MHGNBOFDHIJ; // 0x6C
		::System::Int32 DMAPPGGHNAJ; // 0x70
		::System::Int32 IMCMEPAPHMC; // 0x74
		::System::UInt32 EFAFKOCCPAI; // 0x78
		::System::Int32 PHHHENIPEIJ; // 0x7C
		::System::Int32 LNMNOOFDBKJ; // 0x80
		::CriWare::CriMana::Player_Status GHHGNIHGOBC; // 0x84
		::System::Boolean GABMPMNHFNG; // 0x88
		::System::Boolean CBEECNAJMLA; // 0x89
		::System::Boolean ONJLLJIPLHB; // 0x8A
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

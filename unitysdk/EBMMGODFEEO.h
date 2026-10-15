#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMMGODFEEO_DirectorState.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define EBMMGODFEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x12D030B0)
#define EBMMGODFEEO_GKJIDICCMKK_OFFSET UNITYSDK_OFFSET(0x12D03780)
#define EBMMGODFEEO_HBNICBEJJFJ_OFFSET UNITYSDK_OFFSET(0x12D03340)
#define EBMMGODFEEO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x12D036E0)
#define EBMMGODFEEO_HOEPGHHFBPE_OFFSET UNITYSDK_OFFSET(0x12D038B0)
#define EBMMGODFEEO_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x12D03850)
#define EBMMGODFEEO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x12D030C0)
#define EBMMGODFEEO_MEBCCPMCFMF_OFFSET UNITYSDK_OFFSET(0x12D032E0)
#define EBMMGODFEEO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x12D037D0)

	class EBMMGODFEEO : public ::System::Object
	{
	public:
		::System::String* DKMKBPLKNDC; // 0x10
		::UnityEngine::Playables::PlayableDirector* LDALFGDPLLF; // 0x18
		::UnityEngine::GameObject* IHOJMGFDIHL; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* IEFMDBOGJFA; // 0x28
		::System::Action* NOLDNHOCOLH; // 0x30
		::System::String* FEBCMBILJMP; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DAMHMJPFPDN; // 0x40
		::UnityEngine::Events::UnityAction* FMNFMLKMHHL; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MCBALJMOIKL; // 0x50
		::System::Double GKBFJPGEIJK; // 0x58
		::System::UInt32 OOFOCLJKNCM; // 0x60
		::System::Single AJKNDBOBHFK; // 0x64
		::EBMMGODFEEO_DirectorState MEPFOEEGBEA; // 0x68
		::System::Int32 PHFMCACHFIJ; // 0x6C
		::System::UInt32 BMELGCPFLNA; // 0x70
		::System::Byte _padding0[0x4];
		::System::Double CKGKCODHELK; // 0x78
		::System::Double JNJEDNMKCKI; // 0x80
		::System::Void _ctor(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + EBMMGODFEEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void MEBCCPMCFMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_MEBCCPMCFMF_OFFSET))(this);
		}

		::System::Void GKJIDICCMKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_GKJIDICCMKK_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::RPGTools::Timeline::PauseTimelineReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + EBMMGODFEEO_OHMHJFANEIF_OFFSET))(this, a1, a2);
		}

		::System::Void IECIAPPANHI(::RPGTools::Timeline::PauseTimelineReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + EBMMGODFEEO_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Double HOEPGHHFBPE()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_HOEPGHHFBPE_OFFSET))(this);
		}

		::System::Single HBNICBEJJFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMGODFEEO_HBNICBEJJFJ_OFFSET))(this);
		}

	};

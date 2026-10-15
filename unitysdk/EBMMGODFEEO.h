#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMMGODFEEO_DirectorState.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define EBMMGODFEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFE320)
#define EBMMGODFEEO_GKJIDICCMKK_OFFSET UNITYSDK_OFFSET(0x12CFEA00)
#define EBMMGODFEEO_HBNICBEJJFJ_OFFSET UNITYSDK_OFFSET(0x12CFE5C0)
#define EBMMGODFEEO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x12CFE960)
#define EBMMGODFEEO_HOEPGHHFBPE_OFFSET UNITYSDK_OFFSET(0x12CFEB30)
#define EBMMGODFEEO_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x12CFEAD0)
#define EBMMGODFEEO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x12CFE340)
#define EBMMGODFEEO_MEBCCPMCFMF_OFFSET UNITYSDK_OFFSET(0x12CFE560)
#define EBMMGODFEEO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x12CFEA50)

inline static constexpr unsigned int EBMMGODFEEO_TypeDefinitionIndex = 48492;

	class EBMMGODFEEO : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* FMNFMLKMHHL; // 0x10
		::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* NOLDNHOCOLH; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MCBALJMOIKL; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* IEFMDBOGJFA; // 0x28
		::System::String* DKMKBPLKNDC; // 0x30
		::UnityEngine::Playables::PlayableDirector* LDALFGDPLLF; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DAMHMJPFPDN; // 0x40
		::System::String* FEBCMBILJMP; // 0x48
		::UnityEngine::GameObject* IHOJMGFDIHL; // 0x50
		::System::UInt32 OOFOCLJKNCM; // 0x58
		::System::Int32 PHFMCACHFIJ; // 0x5C
		::System::Single AJKNDBOBHFK; // 0x60
		::System::Byte _padding0[0x4];
		::System::Double CKGKCODHELK; // 0x68
		::System::Double GKBFJPGEIJK; // 0x70
		::System::UInt32 BMELGCPFLNA; // 0x78
		::EBMMGODFEEO_DirectorState MEPFOEEGBEA; // 0x7C
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHPFHLJJFED.h"
#include "unitysdk/KDABFLONAAL.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_AHKBKMLFCHG_OFFSET UNITYSDK_OFFSET(0x1249AD90)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1249ACD0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_CDLEPHAAGED_OFFSET UNITYSDK_OFFSET(0x1249B420)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1249B2D0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_GET_LASTRESULT_OFFSET UNITYSDK_OFFSET(0x1249ACC0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_HBAKFLBLIBF_OFFSET UNITYSDK_OFFSET(0x1249B250)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_JOPDCICEPKH_OFFSET UNITYSDK_OFFSET(0x1249B460)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_OKCDGBPNOGG_OFFSET UNITYSDK_OFFSET(0x1249B4B0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1249B000)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1249B160)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1249B3C0)

namespace MoleMole
{
	inline static constexpr unsigned int Nap_VoGroupStateListener_TypeDefinitionIndex = 86174;

	class Nap_VoGroupStateListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* JFEMJNCCJBI; // 0x0
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* GroupState; // 0x20
		::System::Int32 StateValue; // 0x28
		::CHPFHLJJFED CompareType; // 0x2C
		::KDABFLONAAL TriggerTimes; // 0x30
		::System::Boolean _PPJPFNFNJCI_k__BackingField; // 0x34
		::System::Boolean COJMBNEIMIB; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_LastResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_GET_LASTRESULT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnGroupStateChanged(::Foundation::ViewObject::Subsystem::GroupStateChangeData LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONGROUPSTATECHANGED_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_EVALUATE_OFFSET))(this);
		}

		::System::Void HBAKFLBLIBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_HBAKFLBLIBF_OFFSET))(this);
		}

		::System::Void CDLEPHAAGED(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* NJKCPGDNAED)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_CDLEPHAAGED_OFFSET))(this, CAAFEGLOALC, NJKCPGDNAED);
		}

		::System::Void AHKBKMLFCHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_AHKBKMLFCHG_OFFSET))(this);
		}

		::System::Void JOPDCICEPKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_JOPDCICEPKH_OFFSET))(this);
		}

		::System::Void OKCDGBPNOGG(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_OKCDGBPNOGG_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeListenEntry.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/KKFJFNMFPMM.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeData.h"

#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x11948070)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_GET_CURRENTSUITE_OFFSET UNITYSDK_OFFSET(0x11948060)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_OHKOHPHMAON_OFFSET UNITYSDK_OFFSET(0x11948380)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11948190)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONGROUPSUITECHANGED_OFFSET UNITYSDK_OFFSET(0x11948280)
#define MOLEMOLE_NAP_VOGROUPSUITELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x11948330)

namespace MoleMole
{
	inline static constexpr unsigned int Nap_VoGroupSuiteListener_TypeDefinitionIndex = 78051;

	class Nap_VoGroupSuiteListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* DPMGKDMCPAH; // 0x0
		::System::UInt32 GroupID; // 0x18
		::System::Boolean FilterBySuiteIndex; // 0x1C
		::System::Byte _padding0[0x3];
		::KKFJFNMFPMM CompareType; // 0x20
		::System::UInt32 TargetSuiteIndex; // 0x24
		::Foundation::ViewObject::SuiteInfo _CNJNIPHIEEO_k__BackingField; // 0x28
		::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry PMHPPEJBPCP; // 0x30
		::System::Boolean DKPAACMNBLK; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER__CTOR_OFFSET))(this);
		}

		::Foundation::ViewObject::SuiteInfo get_CurrentSuite()
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_GET_CURRENTSUITE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnGroupSuiteChanged(::Foundation::ViewObject::Subsystem::GroupSuiteChangeData LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeData))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_ONGROUPSUITECHANGED_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void OHKOHPHMAON(::Foundation::ViewObject::SuiteInfo EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSUITELISTENER_OHKOHPHMAON_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}

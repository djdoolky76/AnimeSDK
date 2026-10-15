#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelModelShadowView_EventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC65B20)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC65AD0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDC65A70)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDC65780)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_PKLPIHNJHLH_OFFSET UNITYSDK_OFFSET(0xDC657E0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_START_OFFSET UNITYSDK_OFFSET(0xDC65A10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelModelShadowView_TypeDefinitionIndex = 78331;

	class ChimeraDuelModelShadowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean KDFIBELLEDM; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::Prop::ChimeraDuelModelShadowView_EventType _AutoEnableEvent; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void PKLPIHNJHLH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_PKLPIHNJHLH_OFFSET))(this, a1);
		}

	};
}

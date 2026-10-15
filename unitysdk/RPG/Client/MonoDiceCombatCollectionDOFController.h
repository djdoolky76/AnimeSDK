#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD74EB00)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_FJMFKJEIOIO_OFFSET UNITYSDK_OFFSET(0xD74E650)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_NMICLBFNMEM_OFFSET UNITYSDK_OFFSET(0xD74E6C0)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD74E950)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD74E480)
#define RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD74E5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatCollectionDOFController_TypeDefinitionIndex = 63564;

	class MonoDiceCombatCollectionDOFController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FocusDistance; // 0x18
		::System::Single FStop; // 0x1C
		::System::Single SensorWidth; // 0x20
		::System::Single CGMBGGEHKNP; // 0x24
		::System::Single JIAECCMCJGD; // 0x28
		::System::Single CPFJKPOBNMP; // 0x2C
		::RPG::CustomRP::RPGDepthOfField* EFKDOHFAOID; // 0x30
		::System::Boolean DALKJPIGDNO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void NMICLBFNMEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_NMICLBFNMEM_OFFSET))(this);
		}

		::System::Boolean FJMFKJEIOIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATCOLLECTIONDOFCONTROLLER_FJMFKJEIOIO_OFFSET))(this);
		}

	};
}

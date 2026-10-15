#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class FNFAEAEOFAN;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class GameObject; }

#define FNFAEAEOFAN___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1586DF90)
#define FNFAEAEOFAN___C__DISPLAYCLASS22_0___FIRETRAILEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1586E540)

inline static constexpr unsigned int FNFAEAEOFAN___c__DisplayClass22_0_TypeDefinitionIndex = 60610;

	class FNFAEAEOFAN___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::FNFAEAEOFAN* __4__this; // 0x10
		::UnityEngine::GameObject* targetGo; // 0x18
		::RPG::Client::MonoEffect* energyEffect; // 0x20
		::UnityEngine::GameObject* transitGo; // 0x28
		::System::Int32 energyNum; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void __FireTrailEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + FNFAEAEOFAN___C__DISPLAYCLASS22_0___FIRETRAILEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_3.h"

class ENGKPGFGGLM;
class JFHBMCMMHBB;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTurnBasePreviewEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CHECKOCCLUSIONDITHER_OFFSET UNITYSDK_OFFSET(0x1A0BB060)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CREATEPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x1A0B9E80)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_DESTROYALLPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x1A0BAC20)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A0B9C60)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A0B9CD0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0BAF10)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0B9A50)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKEFFECT_OFFSET UNITYSDK_OFFSET(0x1A0BA5F0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x1A0BBEE0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TRYDESTROYPREVIEWEFFECT_OFFSET UNITYSDK_OFFSET(0x1A0BA400)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC570)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A0BC6E0)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A0BC770)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0BC800)
#define MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0BC890)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBasedBattleTickSubSystem_TypeDefinitionIndex = 76206;

	class TurnBasedBattleTickSubSystem
	{
	public:
		// static const ::System::String* DitherTag; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* occludedBuffer; // 0x10
		::JFHBMCMMHBB* GameContext; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* ditherCharacters; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::System::ValueTuple_3<::System::Int32, ::MoleMole::Config::ConfigTurnBasePreviewEffect*, ::MoleMole::Battle::Entity*>>* previewEffectDic; // 0x28
		::System::Single checkDitherTimer; // 0x30
		::System::Single protectTime; // 0x34
		::System::Single checkInterval; // 0x38
		::System::Single protectTimer; // 0x3C
		::System::Single enemyRoundProtectTimer; // 0x40
		::System::Boolean startSelfRoundProtect; // 0x44
		::System::Boolean startEnemyRoundProtect; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single enemyRoundProtectTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void CreatePreviewEffect(::MoleMole::TurnBattleEntityUnit* owner, ::System::Int32 skillIdx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CREATEPREVIEWEFFECT_OFFSET))(this, owner, skillIdx);
		}

		::System::Void DestroyAllPreviewEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_DESTROYALLPREVIEWEFFECT_OFFSET))(this);
		}

		::System::Void TryDestroyPreviewEffect(::MoleMole::Battle::Entity* owner, ::System::Int32 skillIdx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TRYDESTROYPREVIEWEFFECT_OFFSET))(this, owner, skillIdx);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKEFFECT_OFFSET))(this);
		}

		::System::Void CheckOcclusionDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_CHECKOCCLUSIONDITHER_OFFSET))(this);
		}

		::System::Void TickProtectTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM_TICKPROTECTTIME_OFFSET))(this, deltaTime);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBASEDBATTLETICKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}

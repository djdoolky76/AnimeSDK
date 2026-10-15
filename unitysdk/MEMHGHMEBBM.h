#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCDNNAFPNPL;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchMascotBulletTriggerAttack; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEMHGHMEBBM_CIMPGBOBEJO_OFFSET UNITYSDK_OFFSET(0xB8E1130)
#define MEMHGHMEBBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DFFE0)
#define MEMHGHMEBBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E00A0)
#define MEMHGHMEBBM_FIFIHMNNJPN_OFFSET UNITYSDK_OFFSET(0xB8E0EB0)
#define MEMHGHMEBBM_GEFAEDPDAID_OFFSET UNITYSDK_OFFSET(0xB8E1500)
#define MEMHGHMEBBM_MELGLBNFBPC_OFFSET UNITYSDK_OFFSET(0xB8E0F70)
#define MEMHGHMEBBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8E00F0)

inline static constexpr unsigned int MEMHGHMEBBM_TypeDefinitionIndex = 58746;

	class MEMHGHMEBBM
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* PGNIPAEJGDC; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OJECEJOPKOF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotBulletTriggerAttack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotBulletTriggerAttack*))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean FIFIHMNNJPN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_FIFIHMNNJPN_OFFSET))(this, a1);
		}

		::System::Void MELGLBNFBPC(::RPG::GameCore::AdventureAbilityComponent* a1, ::JCDNNAFPNPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*, ::JCDNNAFPNPL*))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_MELGLBNFBPC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CIMPGBOBEJO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_CIMPGBOBEJO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion GEFAEDPDAID(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MEMHGHMEBBM_GEFAEDPDAID_OFFSET))(this, a1);
		}

	};

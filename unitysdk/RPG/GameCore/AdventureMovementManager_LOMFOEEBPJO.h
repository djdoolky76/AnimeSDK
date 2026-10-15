#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xE56FE00)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xE56B330)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE56FEE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xE56EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_LOMFOEEBPJO_TypeDefinitionIndex = 57095;

	class AdventureMovementManager_LOMFOEEBPJO : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x24
		::System::Int32 GDBJDAOOCOH; // 0x34
		// static const ::System::Object LDNMJCNCGOJ; // 0x0
		::System::Void _ctor(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean DGCGLNOLDIB(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_LOMFOEEBPJO_DGCGLNOLDIB_OFFSET))(this, a1);
		}

	};
}

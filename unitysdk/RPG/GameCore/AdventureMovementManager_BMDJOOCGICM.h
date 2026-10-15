#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMovementManager_LOMFOEEBPJO.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class SphereCollider; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_CTOR_OFFSET UNITYSDK_OFFSET(0xE575C30)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE57A6E0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xE579730)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_JGMOPPNDPHE_OFFSET UNITYSDK_OFFSET(0xE576460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_BMDJOOCGICM_TypeDefinitionIndex = 57096;

	class AdventureMovementManager_BMDJOOCGICM : public ::RPG::GameCore::AdventureMovementManager_LOMFOEEBPJO
	{
	public:
		::UnityEngine::SphereCollider* CEEGJCAJAHB; // 0x38
		::System::Single IDKONBFPBLH; // 0x40
		::System::Void _ctor(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_DISPOSE_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Boolean JGMOPPNDPHE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BMDJOOCGICM_JGMOPPNDPHE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}

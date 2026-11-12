#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_QA_DEBUGANIMATORINFOPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0xF3480F0)
#define RPG_QA_DEBUGANIMATORINFOPANEL_SHOWENTITY_OFFSET UNITYSDK_OFFSET(0xF3480E0)

namespace RPG::QA
{
	inline static constexpr unsigned int DebugAnimatorInfoPanel_TypeDefinitionIndex = 52907;

	class DebugAnimatorInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_DEBUGANIMATORINFOPANEL_CTOR_OFFSET))(this);
		}

		static ::System::Void ShowEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_QA_DEBUGANIMATORINFOPANEL_SHOWENTITY_OFFSET))(a1);
		}

	};
}

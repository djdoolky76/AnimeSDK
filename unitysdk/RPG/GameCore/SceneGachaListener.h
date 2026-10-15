#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SceneGachaListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SCENEGACHALISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5B800)
#define RPG_GAMECORE_SCENEGACHALISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5B810)
#define RPG_GAMECORE_SCENEGACHALISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5B7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneGachaListener_TypeDefinitionIndex = 20349;

	class SceneGachaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GrandRewardCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SmallRewardCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SceneGachaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SceneGachaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SceneGachaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SceneGachaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

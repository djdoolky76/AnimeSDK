#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvModifierListenPhotograph; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2DB0)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5B2DC0)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5B2D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifierListenPhotograph_TypeDefinitionIndex = 22137;

	class AdvModifierListenPhotograph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* StartPhotoGraphCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitPhotoGraphCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

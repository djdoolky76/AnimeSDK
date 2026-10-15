#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialSave; }

#define RPG_GAMECORE_TUTORIALSAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E330)
#define RPG_GAMECORE_TUTORIALSAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E340)
#define RPG_GAMECORE_TUTORIALSAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSave_TypeDefinitionIndex = 24360;

	class TutorialSave : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

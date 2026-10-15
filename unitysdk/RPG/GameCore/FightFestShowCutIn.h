#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestShowCutIn; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5EF0)
#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A5F00)
#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A5EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestShowCutIn_TypeDefinitionIndex = 23231;

	class FightFestShowCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::Single Duration; // 0x20
		::System::Boolean WaitForFinish; // 0x24
		::System::Boolean IsOverrideDesc; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID TargetDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestShowCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestShowCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

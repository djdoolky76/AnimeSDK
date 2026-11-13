#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetShenJunActionBar; }

#define RPG_GAMECORE_SETSHENJUNACTIONBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E0CE0)
#define RPG_GAMECORE_SETSHENJUNACTIONBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F9E0CF0)
#define RPG_GAMECORE_SETSHENJUNACTIONBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F9E0CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetShenJunActionBar_TypeDefinitionIndex = 23358;

	class SetShenJunActionBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Level1LayerCount; // 0x18
		::System::UInt32 Level2LayerCount; // 0x1C
		::System::UInt32 Level3LayerCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetShenJunActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetShenJunActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

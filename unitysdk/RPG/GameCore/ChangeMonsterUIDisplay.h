#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterUIDisplay.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeMonsterUIDisplay; }

#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D538CF0)
#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D538D30)
#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53A220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMonsterUIDisplay_TypeDefinitionIndex = 23675;

	class ChangeMonsterUIDisplay : public ::RPG::GameCore::ChangeCharacterUIDisplay
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* Strategies; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterUIDisplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

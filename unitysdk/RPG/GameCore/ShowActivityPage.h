#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowActivityPage; }

#define RPG_GAMECORE_SHOWACTIVITYPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8B10)
#define RPG_GAMECORE_SHOWACTIVITYPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA8B20)
#define RPG_GAMECORE_SHOWACTIVITYPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA8AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActivityPage_TypeDefinitionIndex = 21700;

	class ShowActivityPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* PanelID; // 0x18
		::System::Boolean WaitForExit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActivityPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActivityPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIVITYPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ShowBattleCardBuffSelection; }

#define RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF03B0C0)
#define RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF03B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCardBuffSelectionDialogInitParam_TypeDefinitionIndex = 59872;

	class BattleCardBuffSelectionDialogInitParam : public ::System::Object
	{
	public:
		::RPG::GameCore::ShowBattleCardBuffSelection* Config; // 0x10
		::System::Single AutoSelectDelay; // 0x18
		::System::Int32 AutoSelectIndex; // 0x1C
		::System::Single AutoConfirmDelay; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_DISPOSE_OFFSET))(this);
		}

	};
}

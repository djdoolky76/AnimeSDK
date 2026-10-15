#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialUI; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7080)
#define RPG_GAMECORE_SHOWTUTORIALUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE7090)
#define RPG_GAMECORE_SHOWTUTORIALUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialUI_TypeDefinitionIndex = 20894;

	class ShowTutorialUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* AssociatedUIName; // 0x20
		::System::Boolean ForceShowDialog; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

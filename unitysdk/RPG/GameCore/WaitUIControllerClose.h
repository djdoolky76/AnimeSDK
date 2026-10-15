#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUIControllerClose; }
namespace System { class String; }

#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA4720)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA4730)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA46F0)

namespace RPG::GameCore
{
	class WaitUIControllerClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIControllerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIControllerClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIControllerClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIControllerClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIControllerClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

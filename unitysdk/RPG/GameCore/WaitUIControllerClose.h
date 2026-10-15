#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUIControllerClose; }
namespace System { class String; }

#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC76E70)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC76E80)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC76E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIControllerClose_TypeDefinitionIndex = 21176;

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

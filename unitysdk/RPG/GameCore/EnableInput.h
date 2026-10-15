#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableInput; }

#define RPG_GAMECORE_ENABLEINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63F730)
#define RPG_GAMECORE_ENABLEINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63F740)
#define RPG_GAMECORE_ENABLEINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63F6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableInput_TypeDefinitionIndex = 20890;

	class EnableInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

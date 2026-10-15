#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B9390)
#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B93A0)
#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B9360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideCustomDroneFuncBtn_TypeDefinitionIndex = 22136;

	class OverrideCustomDroneFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OverrideIconPath; // 0x18
		::RPG::Client::TextID OverrideBtnName; // 0x20
		::System::String* OverrideActionCustomString; // 0x30
		::System::Boolean ResetOverrride; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

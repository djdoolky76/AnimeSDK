#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPBUTTONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D945C10)
#define RPG_GAMECORE_PROPBUTTONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9459C0)

namespace RPG::GameCore
{
	class PropButtonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ID; // 0x10
		::RPG::GameCore::DynamicString* ButtonIcon; // 0x18
		::RPG::GameCore::JsonEnum* IconType; // 0x20
		::RPG::GameCore::DynamicString* ButtonText; // 0x28
		::RPG::GameCore::DynamicString* ButtonTextParam; // 0x30
		::RPG::GameCore::ButtonShowPriority ShowPriority; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LittleGameEvent* InteractEvent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPBUTTONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropButtonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPBUTTONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

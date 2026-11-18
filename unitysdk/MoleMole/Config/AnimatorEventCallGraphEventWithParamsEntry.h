#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x11A57050)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11A570D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCallGraphEventWithParamsEntry_TypeDefinitionIndex = 84399;

	class AnimatorEventCallGraphEventWithParamsEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* Params; // 0x58
		::System::String* EventName; // 0x60
		::System::String* AbilityName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCALLGRAPHEVENTWITHPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPROPERTYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x163F9930)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPROPERTYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x163F99B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventModifyPropertyEntry_TypeDefinitionIndex = 85432;

	class AnimatorEventModifyPropertyEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CustomPropertyType; // 0x58
		::MoleMole::Config::PropertyModifyFunction PropertyModifyFunction; // 0x60
		::System::Single Amount; // 0x64
		::MoleMole::Config::BaseProperty PropertyType; // 0x68
		::System::Single Percentage; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPROPERTYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPROPERTYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_REVERSESWITCHLAYOUTPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3D70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ReverseSwitchLayoutPreset_TypeDefinitionIndex = 84693;

	class ConfigUICommon_Input_ReverseSwitchLayoutPreset : public ::System::Object
	{
	public:
		::System::String* textMapKey; // 0x10
		::Il2CppArray<::System::Object*>* buttonSlots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_REVERSESWITCHLAYOUTPRESET__CTOR_OFFSET))(this);
		}
	};
}

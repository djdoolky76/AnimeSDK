#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1929F890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerform_TypeDefinitionIndex = 70375;

	class ConfigLevelResultPerform : public ::System::Object
	{
	public:
		::System::String* LoopVideoUrl; // 0x10
		::System::String* StartVideoUrl; // 0x18
		::System::String* ScriptableAnimation; // 0x20
		::System::String* EndVideoUrl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET))(this);
		}
	};
}

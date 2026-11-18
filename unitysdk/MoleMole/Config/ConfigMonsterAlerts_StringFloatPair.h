#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_STRINGFLOATPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A032760)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_STRINGFLOATPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A032750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_StringFloatPair_TypeDefinitionIndex = 85201;

	class ConfigMonsterAlerts_StringFloatPair : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_STRINGFLOATPAIR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* k, ::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_STRINGFLOATPAIR__CTOR_1_OFFSET))(this, k, v);
		}
	};
}

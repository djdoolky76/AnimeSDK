#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGPREIFIXTASK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x103E3CA0)
#define MOLEMOLE_CONFIGPREIFIXTASK_HFENAHPFNKL_OFFSET UNITYSDK_OFFSET(0x103E3C00)
#define MOLEMOLE_CONFIGPREIFIXTASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x103E3B00)
#define MOLEMOLE_CONFIGPREIFIXTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3BE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPreIFixTask_TypeDefinitionIndex = 42015;

	class ConfigPreIFixTask : public ::System::Object
	{
	public:
		static ::MoleMole::ConfigPreIFixTask** StaticGet__config()
		{
			return (::MoleMole::ConfigPreIFixTask**)Il2CppClass::FromTypeDefinitionIndex(ConfigPreIFixTask_TypeDefinitionIndex)->GetStaticField(0x3BE20);
		}
		::System::Int32 urlRequestCount; // 0x10
		::System::Single urlRetryDelay; // 0x14
		::System::Single urlConnectTimeout; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_TOSTRING_OFFSET))(this);
		}

		static ::MoleMole::ConfigPreIFixTask* HFENAHPFNKL()
		{
			return ((::MoleMole::ConfigPreIFixTask*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_HFENAHPFNKL_OFFSET))();
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}

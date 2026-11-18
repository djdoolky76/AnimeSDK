#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPLBFDLNDII.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C_MJPGAKKJAEG_OFFSET UNITYSDK_OFFSET(0x19B1BB90)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B1BB40)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BB80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex = 59441;

	class ConfigLockNearInMainCityTarget___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex)->GetStaticField(0x34820);
		}
		static ::System::Comparison_1<::LPLBFDLNDII>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::LPLBFDLNDII>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex)->GetStaticField(0x34828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 MJPGAKKJAEG(::LPLBFDLNDII HAAEBCOBKFF, ::LPLBFDLNDII BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::LPLBFDLNDII, ::LPLBFDLNDII))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C_MJPGAKKJAEG_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}
	};
}

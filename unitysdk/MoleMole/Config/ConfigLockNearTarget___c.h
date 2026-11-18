#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPLBFDLNDII.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C_OKKDMHALGBM_OFFSET UNITYSDK_OFFSET(0xFAC7C80)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAC7C30)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearTarget___c_TypeDefinitionIndex = 65941;

	class ConfigLockNearTarget___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearTarget___c_TypeDefinitionIndex)->GetStaticField(0x44AA0);
		}
		static ::System::Comparison_1<::LPLBFDLNDII>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::LPLBFDLNDII>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearTarget___c_TypeDefinitionIndex)->GetStaticField(0x44AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 OKKDMHALGBM(::LPLBFDLNDII HAAEBCOBKFF, ::LPLBFDLNDII BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::LPLBFDLNDII, ::LPLBFDLNDII))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C_OKKDMHALGBM_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}
	};
}

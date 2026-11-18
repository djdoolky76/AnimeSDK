#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE___C_ECBKMEMNCLL_OFFSET UNITYSDK_OFFSET(0x14AFF640)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AFF5F0)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFF630)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule___c_TypeDefinitionIndex = 68058;

	class MonoGamepadLinkModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x487E0);
		}
		static ::System::Comparison_1<::System::Single>** StaticGet___9__133_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x487E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 ECBKMEMNCLL(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C_ECBKMEMNCLL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}

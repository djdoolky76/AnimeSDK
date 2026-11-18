#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMIGPHLOLAJ;
class PNHAEMFHHEB;
namespace System { template <typename T1, typename T2> class Action_2; }

#define GNJIHMFNPDK___C_IPFHMNKGDDE_OFFSET UNITYSDK_OFFSET(0x16CD7E60)
#define GNJIHMFNPDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD7E10)
#define GNJIHMFNPDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD7E50)

inline static constexpr unsigned int GNJIHMFNPDK___c_TypeDefinitionIndex = 43843;

class GNJIHMFNPDK___c : public ::System::Object
{
public:
	static ::System::Action_2<::JMIGPHLOLAJ*, ::PNHAEMFHHEB*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::JMIGPHLOLAJ*, ::PNHAEMFHHEB*>**)Il2CppClass::FromTypeDefinitionIndex(GNJIHMFNPDK___c_TypeDefinitionIndex)->GetStaticField(0x37920);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GNJIHMFNPDK___c_TypeDefinitionIndex)->GetStaticField(0x37928);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNJIHMFNPDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK___C__CTOR_OFFSET))(this);
	}

	::System::Void IPFHMNKGDDE(::JMIGPHLOLAJ* IDGBKCLIBEK, ::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::PVOID, ::JMIGPHLOLAJ*, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK___C_IPFHMNKGDDE_OFFSET))(this, IDGBKCLIBEK, KNENMPAIHBJ);
	}
};

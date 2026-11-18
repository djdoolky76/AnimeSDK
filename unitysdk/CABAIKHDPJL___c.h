#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOJHOPPEIL;
namespace System { template <typename T> class Comparison_1; }

#define CABAIKHDPJL___C_LIFLAKLIPHN_OFFSET UNITYSDK_OFFSET(0x14F0AB20)
#define CABAIKHDPJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F0AAD0)
#define CABAIKHDPJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0AB10)

inline static constexpr unsigned int CABAIKHDPJL___c_TypeDefinitionIndex = 71737;

class CABAIKHDPJL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CABAIKHDPJL___c_TypeDefinitionIndex)->GetStaticField(0x31080);
	}
	static ::System::Comparison_1<::CAOJHOPPEIL*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::CAOJHOPPEIL*>**)Il2CppClass::FromTypeDefinitionIndex(CABAIKHDPJL___c_TypeDefinitionIndex)->GetStaticField(0x31088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABAIKHDPJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABAIKHDPJL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LIFLAKLIPHN(::CAOJHOPPEIL* EJCBEJMGFAJ, ::CAOJHOPPEIL* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CAOJHOPPEIL*, ::CAOJHOPPEIL*))((::PBYTE)hIl2Cpp + CABAIKHDPJL___C_LIFLAKLIPHN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

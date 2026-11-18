#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EINNDDBIPAM;
namespace System { template <typename T> class Comparison_1; }

#define KIAOPEEINAK___C_PGJHKLLBELK_OFFSET UNITYSDK_OFFSET(0x163417D0)
#define KIAOPEEINAK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16341780)
#define KIAOPEEINAK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163417C0)

inline static constexpr unsigned int KIAOPEEINAK___c_TypeDefinitionIndex = 80174;

class KIAOPEEINAK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KIAOPEEINAK___c_TypeDefinitionIndex)->GetStaticField(0x4F720);
	}
	static ::System::Comparison_1<::EINNDDBIPAM*>** StaticGet___9__31_0()
	{
		return (::System::Comparison_1<::EINNDDBIPAM*>**)Il2CppClass::FromTypeDefinitionIndex(KIAOPEEINAK___c_TypeDefinitionIndex)->GetStaticField(0x4F728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAOPEEINAK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAOPEEINAK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PGJHKLLBELK(::EINNDDBIPAM* EJCBEJMGFAJ, ::EINNDDBIPAM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EINNDDBIPAM*, ::EINNDDBIPAM*))((::PBYTE)hIl2Cpp + KIAOPEEINAK___C_PGJHKLLBELK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

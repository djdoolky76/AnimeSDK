#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMNGCINABBM;
namespace System { template <typename T> class Comparison_1; }

#define FCBCIKHBEML___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x14ABB060)
#define FCBCIKHBEML___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ABB010)
#define FCBCIKHBEML___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABB050)

inline static constexpr unsigned int FCBCIKHBEML___c_TypeDefinitionIndex = 44357;

class FCBCIKHBEML___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FCBCIKHBEML___c_TypeDefinitionIndex)->GetStaticField(0x4E3D0);
	}
	static ::System::Comparison_1<::BMNGCINABBM*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::BMNGCINABBM*>**)Il2CppClass::FromTypeDefinitionIndex(FCBCIKHBEML___c_TypeDefinitionIndex)->GetStaticField(0x4E3D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCBCIKHBEML___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBCIKHBEML___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HLOOGMIAIDG(::BMNGCINABBM* EJCBEJMGFAJ, ::BMNGCINABBM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BMNGCINABBM*, ::BMNGCINABBM*))((::PBYTE)hIl2Cpp + FCBCIKHBEML___C_HLOOGMIAIDG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

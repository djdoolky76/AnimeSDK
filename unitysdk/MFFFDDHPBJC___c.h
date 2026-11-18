#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBIMBMLNBOM;
namespace System { template <typename T> class Comparison_1; }

#define MFFFDDHPBJC___C_IJOJPJDIDAM_OFFSET UNITYSDK_OFFSET(0x14DDFFA0)
#define MFFFDDHPBJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DDFF50)
#define MFFFDDHPBJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDFF90)

inline static constexpr unsigned int MFFFDDHPBJC___c_TypeDefinitionIndex = 59581;

class MFFFDDHPBJC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFFFDDHPBJC___c_TypeDefinitionIndex)->GetStaticField(0x4D690);
	}
	static ::System::Comparison_1<::EBIMBMLNBOM*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::EBIMBMLNBOM*>**)Il2CppClass::FromTypeDefinitionIndex(MFFFDDHPBJC___c_TypeDefinitionIndex)->GetStaticField(0x4D698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFFFDDHPBJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFDDHPBJC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IJOJPJDIDAM(::EBIMBMLNBOM* EJCBEJMGFAJ, ::EBIMBMLNBOM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EBIMBMLNBOM*, ::EBIMBMLNBOM*))((::PBYTE)hIl2Cpp + MFFFDDHPBJC___C_IJOJPJDIDAM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

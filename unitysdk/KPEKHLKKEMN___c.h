#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNAHOHABAIC;
namespace System { template <typename T> class Comparison_1; }

#define KPEKHLKKEMN___C_CAKBFPOGJML_OFFSET UNITYSDK_OFFSET(0x126B6D90)
#define KPEKHLKKEMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126B6D40)
#define KPEKHLKKEMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126B6D80)

inline static constexpr unsigned int KPEKHLKKEMN___c_TypeDefinitionIndex = 91105;

class KPEKHLKKEMN___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::JNAHOHABAIC*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::JNAHOHABAIC*>**)Il2CppClass::FromTypeDefinitionIndex(KPEKHLKKEMN___c_TypeDefinitionIndex)->GetStaticField(0x3B8F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPEKHLKKEMN___c_TypeDefinitionIndex)->GetStaticField(0x3B8F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPEKHLKKEMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKHLKKEMN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CAKBFPOGJML(::JNAHOHABAIC* HAAEBCOBKFF, ::JNAHOHABAIC* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::JNAHOHABAIC*, ::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + KPEKHLKKEMN___C_CAKBFPOGJML_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define FPOOKGEOJOC___C_BJGDAMOINCH_OFFSET UNITYSDK_OFFSET(0x142BEE90)
#define FPOOKGEOJOC___C_CJLABIAKOMK_OFFSET UNITYSDK_OFFSET(0x142BEEA0)
#define FPOOKGEOJOC___C_CNAMCEGBJEA_OFFSET UNITYSDK_OFFSET(0x142BEEB0)
#define FPOOKGEOJOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142BEE40)
#define FPOOKGEOJOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142BEE80)

inline static constexpr unsigned int FPOOKGEOJOC___c_TypeDefinitionIndex = 66258;

class FPOOKGEOJOC___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FPOOKGEOJOC___c_TypeDefinitionIndex)->GetStaticField(0x3ADD0);
	}
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FPOOKGEOJOC___c_TypeDefinitionIndex)->GetStaticField(0x3ADD8);
	}
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FPOOKGEOJOC___c_TypeDefinitionIndex)->GetStaticField(0x3ADE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FPOOKGEOJOC___c_TypeDefinitionIndex)->GetStaticField(0x3ADE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPOOKGEOJOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOKGEOJOC___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 BJGDAMOINCH(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPOOKGEOJOC___C_BJGDAMOINCH_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::UInt32 CJLABIAKOMK(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPOOKGEOJOC___C_CJLABIAKOMK_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::UInt32 CNAMCEGBJEA(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPOOKGEOJOC___C_CNAMCEGBJEA_OFFSET))(this, HAAEBCOBKFF);
	}
};

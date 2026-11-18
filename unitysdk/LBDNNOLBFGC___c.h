#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DAHKJHFCLBC;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define LBDNNOLBFGC___C_OHEPBHNHOPD_OFFSET UNITYSDK_OFFSET(0x18651850)
#define LBDNNOLBFGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18651800)
#define LBDNNOLBFGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18651840)

inline static constexpr unsigned int LBDNNOLBFGC___c_TypeDefinitionIndex = 73762;

class LBDNNOLBFGC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBDNNOLBFGC___c_TypeDefinitionIndex)->GetStaticField(0x32A30);
	}
	static ::System::Converter_2<::DAHKJHFCLBC*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::DAHKJHFCLBC*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LBDNNOLBFGC___c_TypeDefinitionIndex)->GetStaticField(0x32A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBDNNOLBFGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDNNOLBFGC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OHEPBHNHOPD(::DAHKJHFCLBC* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::DAHKJHFCLBC*))((::PBYTE)hIl2Cpp + LBDNNOLBFGC___C_OHEPBHNHOPD_OFFSET))(this, HAAEBCOBKFF);
	}
};

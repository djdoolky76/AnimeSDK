#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLAGJHKADAN;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILMKONAJBGC___C_AHDNICGCJNB_OFFSET UNITYSDK_OFFSET(0x141F8380)
#define ILMKONAJBGC___C_BDMHLLILFMA_OFFSET UNITYSDK_OFFSET(0x141F8350)
#define ILMKONAJBGC___C_LBGODFLFELN_OFFSET UNITYSDK_OFFSET(0x141F8370)
#define ILMKONAJBGC___C_PKAEDDIMBBD_OFFSET UNITYSDK_OFFSET(0x141F83A0)
#define ILMKONAJBGC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141F8300)
#define ILMKONAJBGC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141F8340)

inline static constexpr unsigned int ILMKONAJBGC___c_TypeDefinitionIndex = 88921;

class ILMKONAJBGC___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__185_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ILMKONAJBGC___c_TypeDefinitionIndex)->GetStaticField(0x37D90);
	}
	static ::System::Func_2<::GLAGJHKADAN*, ::System::Int32>** StaticGet___9__58_1()
	{
		return (::System::Func_2<::GLAGJHKADAN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ILMKONAJBGC___c_TypeDefinitionIndex)->GetStaticField(0x37D98);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ILMKONAJBGC___c_TypeDefinitionIndex)->GetStaticField(0x37DA0);
	}
	static ::System::Func_2<::GLAGJHKADAN*, ::System::Int32>** StaticGet___9__58_0()
	{
		return (::System::Func_2<::GLAGJHKADAN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ILMKONAJBGC___c_TypeDefinitionIndex)->GetStaticField(0x37DA8);
	}
	static ::System::Action** StaticGet___9__187_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ILMKONAJBGC___c_TypeDefinitionIndex)->GetStaticField(0x37DB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILMKONAJBGC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BDMHLLILFMA(::GLAGJHKADAN* HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::GLAGJHKADAN*))((::PBYTE)hIl2Cpp + ILMKONAJBGC___C_BDMHLLILFMA_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Int32 LBGODFLFELN(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILMKONAJBGC___C_LBGODFLFELN_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 AHDNICGCJNB(::GLAGJHKADAN* HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::GLAGJHKADAN*))((::PBYTE)hIl2Cpp + ILMKONAJBGC___C_AHDNICGCJNB_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Void PKAEDDIMBBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC___C_PKAEDDIMBBD_OFFSET))(this);
	}
};

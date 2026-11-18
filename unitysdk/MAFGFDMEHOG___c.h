#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEHLONLGMGK;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MAFGFDMEHOG___C_AFJOAPFMKIL_OFFSET UNITYSDK_OFFSET(0x16C6E8C0)
#define MAFGFDMEHOG___C_CJDPPJDGANF_OFFSET UNITYSDK_OFFSET(0x16C6E850)
#define MAFGFDMEHOG___C_DDMNGBLFPCJ_OFFSET UNITYSDK_OFFSET(0x16C6E9B0)
#define MAFGFDMEHOG___C_MNPEHHAJLHN_OFFSET UNITYSDK_OFFSET(0x16C6EA20)
#define MAFGFDMEHOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C6E800)
#define MAFGFDMEHOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6E840)

inline static constexpr unsigned int MAFGFDMEHOG___c_TypeDefinitionIndex = 46019;

class MAFGFDMEHOG___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__69_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MAFGFDMEHOG___c_TypeDefinitionIndex)->GetStaticField(0x38590);
	}
	static ::System::Comparison_1<::MEHLONLGMGK*>** StaticGet___9__68_0()
	{
		return (::System::Comparison_1<::MEHLONLGMGK*>**)Il2CppClass::FromTypeDefinitionIndex(MAFGFDMEHOG___c_TypeDefinitionIndex)->GetStaticField(0x38598);
	}
	static ::System::Converter_2<::MEHLONLGMGK*, ::System::String*>** StaticGet___9__70_0()
	{
		return (::System::Converter_2<::MEHLONLGMGK*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MAFGFDMEHOG___c_TypeDefinitionIndex)->GetStaticField(0x385A0);
	}
	static ::System::Comparison_1<::MEHLONLGMGK*>** StaticGet___9__69_2()
	{
		return (::System::Comparison_1<::MEHLONLGMGK*>**)Il2CppClass::FromTypeDefinitionIndex(MAFGFDMEHOG___c_TypeDefinitionIndex)->GetStaticField(0x385A8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MAFGFDMEHOG___c_TypeDefinitionIndex)->GetStaticField(0x385B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CJDPPJDGANF(::MEHLONLGMGK* EJCBEJMGFAJ, ::MEHLONLGMGK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MEHLONLGMGK*, ::MEHLONLGMGK*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C_CJDPPJDGANF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Boolean AFJOAPFMKIL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C_AFJOAPFMKIL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 DDMNGBLFPCJ(::MEHLONLGMGK* EJCBEJMGFAJ, ::MEHLONLGMGK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MEHLONLGMGK*, ::MEHLONLGMGK*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C_DDMNGBLFPCJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::String* MNPEHHAJLHN(::MEHLONLGMGK* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::MEHLONLGMGK*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG___C_MNPEHHAJLHN_OFFSET))(this, HAAEBCOBKFF);
	}
};

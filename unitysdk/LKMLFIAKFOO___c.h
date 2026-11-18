#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBIHDBHFJKE;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define LKMLFIAKFOO___C_DEMOEOIPLMF_OFFSET UNITYSDK_OFFSET(0x16375F10)
#define LKMLFIAKFOO___C_EDALMDEFFPE_OFFSET UNITYSDK_OFFSET(0x16375F00)
#define LKMLFIAKFOO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16375EB0)
#define LKMLFIAKFOO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16375EF0)

inline static constexpr unsigned int LKMLFIAKFOO___c_TypeDefinitionIndex = 43580;

class LKMLFIAKFOO___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::LBIHDBHFJKE*>** StaticGet___9__225_0()
	{
		return (::System::Comparison_1<::LBIHDBHFJKE*>**)Il2CppClass::FromTypeDefinitionIndex(LKMLFIAKFOO___c_TypeDefinitionIndex)->GetStaticField(0x44790);
	}
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__83_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LKMLFIAKFOO___c_TypeDefinitionIndex)->GetStaticField(0x44798);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LKMLFIAKFOO___c_TypeDefinitionIndex)->GetStaticField(0x447A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKMLFIAKFOO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EDALMDEFFPE(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKMLFIAKFOO___C_EDALMDEFFPE_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 DEMOEOIPLMF(::LBIHDBHFJKE* EJCBEJMGFAJ, ::LBIHDBHFJKE* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::LBIHDBHFJKE*, ::LBIHDBHFJKE*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO___C_DEMOEOIPLMF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

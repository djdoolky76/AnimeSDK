#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMDFEAFDHJC.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHKEAKHADOO_CBEANMNEHAO_OFFSET UNITYSDK_OFFSET(0x16BE3200)
#define EHKEAKHADOO_CDICILPKLHD_OFFSET UNITYSDK_OFFSET(0x16BE3430)
#define EHKEAKHADOO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BE31F0)
#define EHKEAKHADOO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE31E0)

inline static constexpr unsigned int EHKEAKHADOO_TypeDefinitionIndex = 46824;

class EHKEAKHADOO : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GCKBIPOEBNB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EHKEAKHADOO_TypeDefinitionIndex)->GetStaticField(0x12040);
	}
	::System::Collections::Generic::List_1<::EMDFEAFDHJC>* BHDAHBGIPCH; // 0x10
	::MoleMole::Config::DamageElementType DFALMHFEAEF; // 0x18
	::System::Single AEMBHPOOALG; // 0x1C
	::System::Single EKHOICFLDDD; // 0x20
	::System::Int32 KBIGPEAHGII; // 0x24
	::System::Int32 HGMPOGAFEGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKEAKHADOO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHKEAKHADOO__CCTOR_OFFSET))();
	}

	static ::EHKEAKHADOO* CBEANMNEHAO(::System::Collections::Generic::List_1<::EMDFEAFDHJC>* AIBLPKLIGNK, ::System::Single BIEKMNCJIOI, ::MoleMole::Config::DamageElementType HELLOIIPKGF, ::System::Int32 KEHNCKBIBFA, ::System::Single BDHOHDNLFJE)
	{
		return ((::EHKEAKHADOO*(*)(::System::Collections::Generic::List_1<::EMDFEAFDHJC>*, ::System::Single, ::MoleMole::Config::DamageElementType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EHKEAKHADOO_CBEANMNEHAO_OFFSET))(AIBLPKLIGNK, BIEKMNCJIOI, HELLOIIPKGF, KEHNCKBIBFA, BDHOHDNLFJE);
	}

	::System::Single CDICILPKLHD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKEAKHADOO_CDICILPKLHD_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDEMMLMJALB.h"
#include "unitysdk/NNFANENBBOD.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBNBIMMAOPJ_OPKENDOFICF_OFFSET UNITYSDK_OFFSET(0x18DF6350)
#define LBNBIMMAOPJ_PKJPGEBPMOM_OFFSET UNITYSDK_OFFSET(0x18DF5F30)
#define LBNBIMMAOPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DF5E80)
#define LBNBIMMAOPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF5E70)

inline static constexpr unsigned int LBNBIMMAOPJ_TypeDefinitionIndex = 12456;

class LBNBIMMAOPJ : public ::JDEMMLMJALB
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_JCFBMELNBLI()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(LBNBIMMAOPJ_TypeDefinitionIndex)->GetStaticField(0x7A70);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_GLCGPFKBJMG()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(LBNBIMMAOPJ_TypeDefinitionIndex)->GetStaticField(0x7A78);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* MNCNPFNNADI; // 0x178
	::System::Collections::Generic::List_1<::System::Int32>* IEKCJEEOMEP; // 0x180

	::System::Void _ctor(::NNFANENBBOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NNFANENBBOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LBNBIMMAOPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBNBIMMAOPJ__CCTOR_OFFSET))();
	}

	::System::Boolean PKJPGEBPMOM(::System::Int32 JHFKDGBCOBA, ::System::Collections::Generic::List_1<::System::Int32>*& IGPMCNCIOAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + LBNBIMMAOPJ_PKJPGEBPMOM_OFFSET))(this, JHFKDGBCOBA, IGPMCNCIOAL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OPKENDOFICF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNBIMMAOPJ_OPKENDOFICF_OFFSET))(this);
	}
};

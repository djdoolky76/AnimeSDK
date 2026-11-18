#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/HDNPAPNHIIG.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class ONDCMMIBPHD;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPEMIEFFNEN___C_OCGILNHIKHO_OFFSET UNITYSDK_OFFSET(0x176326A0)
#define JPEMIEFFNEN___C_OJMBJAGGOEA_OFFSET UNITYSDK_OFFSET(0x176326C0)
#define JPEMIEFFNEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17632650)
#define JPEMIEFFNEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17632690)

inline static constexpr unsigned int JPEMIEFFNEN___c_TypeDefinitionIndex = 68744;

class JPEMIEFFNEN___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>, ::HDNPAPNHIIG>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>, ::HDNPAPNHIIG>**)Il2CppClass::FromTypeDefinitionIndex(JPEMIEFFNEN___c_TypeDefinitionIndex)->GetStaticField(0x4D450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JPEMIEFFNEN___c_TypeDefinitionIndex)->GetStaticField(0x4D458);
	}
	static ::System::Func_2<::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*>, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JPEMIEFFNEN___c_TypeDefinitionIndex)->GetStaticField(0x4D460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEMIEFFNEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN___C__CTOR_OFFSET))(this);
	}

	::HDNPAPNHIIG OCGILNHIKHO(::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*> DLBHJOGKNOC)
	{
		return ((::HDNPAPNHIIG(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>))((::PBYTE)hIl2Cpp + JPEMIEFFNEN___C_OCGILNHIKHO_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Boolean OJMBJAGGOEA(::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*> DLBHJOGKNOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*>))((::PBYTE)hIl2Cpp + JPEMIEFFNEN___C_OJMBJAGGOEA_OFFSET))(this, DLBHJOGKNOC);
	}
};

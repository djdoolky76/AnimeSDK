#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBIIMMMKDDL.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AKHBGIBKLPG;
class GMGGPBHLKGO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFDBLEGMGPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7D9470)
#define NFDBLEGMGPH_GAMJCCJALMG_OFFSET UNITYSDK_OFFSET(0x1F7DA050)
#define NFDBLEGMGPH_IAJGEMFNPDF_OFFSET UNITYSDK_OFFSET(0x1F7DA260)
#define NFDBLEGMGPH_MGNEBCEJFPL_OFFSET UNITYSDK_OFFSET(0x1F7D9970)
#define NFDBLEGMGPH_MMNIGHDPLDN_1_OFFSET UNITYSDK_OFFSET(0x1F7D9FD0)
#define NFDBLEGMGPH_MMNIGHDPLDN_OFFSET UNITYSDK_OFFSET(0x1F7D97A0)
#define NFDBLEGMGPH_MNOEMAJPILO_OFFSET UNITYSDK_OFFSET(0x1F7DA1B0)
#define NFDBLEGMGPH_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1F7D9430)
#define NFDBLEGMGPH_PGAGEKLAPNJ_OFFSET UNITYSDK_OFFSET(0x1F7D9A10)
#define NFDBLEGMGPH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1F7D9B30)
#define NFDBLEGMGPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7D9790)
#define NFDBLEGMGPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D92D0)

inline static constexpr unsigned int NFDBLEGMGPH_TypeDefinitionIndex = 8334;

class NFDBLEGMGPH
{
public:
	static ::System::Int32* StaticGet_NBJBLCGELKC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NFDBLEGMGPH_TypeDefinitionIndex)->GetStaticField(0x3770);
	}
	::System::Collections::Generic::Dictionary_2<::FBIIMMMKDDL, ::AKHBGIBKLPG*>* EBKKGKGCHJE; // 0x10
	::System::Collections::Generic::Dictionary_2<::FBIIMMMKDDL, ::GMGGPBHLKGO*>* MKPMBBJONPI; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::FBIIMMMKDDL, ::AKHBGIBKLPG*>>* FEKHBNEPNBK; // 0x20
	::System::Boolean KDNINJFEEFB; // 0x28
	::System::Boolean IFHPNDPONAL; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBLEGMGPH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFDBLEGMGPH__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_DISPOSE_OFFSET))(this);
	}

	::System::Void MMNIGHDPLDN(::FBIIMMMKDDL PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::FBIIMMMKDDL))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_MMNIGHDPLDN_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void MGNEBCEJFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_MGNEBCEJFPL_OFFSET))(this);
	}

	::System::Boolean PGAGEKLAPNJ(::FBIIMMMKDDL PHHDHIBOCKA, ::GMGGPBHLKGO*& JPEMIGMJBLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBIIMMMKDDL, ::GMGGPBHLKGO*&))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_PGAGEKLAPNJ_OFFSET))(this, PHHDHIBOCKA, JPEMIGMJBLF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MMNIGHDPLDN_1(::GMGGPBHLKGO* JPEMIGMJBLF)
	{
		return ((::System::Void(*)(::PVOID, ::GMGGPBHLKGO*))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_MMNIGHDPLDN_1_OFFSET))(this, JPEMIGMJBLF);
	}

	::System::Int32 MNOEMAJPILO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_MNOEMAJPILO_OFFSET))(this);
	}

	::System::Boolean GAMJCCJALMG(::GMGGPBHLKGO* JPEMIGMJBLF, ::FBIIMMMKDDL& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GMGGPBHLKGO*, ::FBIIMMMKDDL&))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_GAMJCCJALMG_OFFSET))(this, JPEMIGMJBLF, PHHDHIBOCKA);
	}

	static ::GMGGPBHLKGO* IAJGEMFNPDF(::System::Int32 HLJEFIIDMFA)
	{
		return ((::GMGGPBHLKGO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NFDBLEGMGPH_IAJGEMFNPDF_OFFSET))(HLJEFIIDMFA);
	}
};

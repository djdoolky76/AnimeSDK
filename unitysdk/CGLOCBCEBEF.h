#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBCBKJPCKHB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGLOCBCEBEF_AEKNADMMCDG_OFFSET UNITYSDK_OFFSET(0x1A17D150)
#define CGLOCBCEBEF_CLPIFPEGMFI_OFFSET UNITYSDK_OFFSET(0x1A17C790)
#define CGLOCBCEBEF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A17D570)
#define CGLOCBCEBEF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A17D560)
#define CGLOCBCEBEF_GEOGFBNCHMG_OFFSET UNITYSDK_OFFSET(0x1A17CBA0)
#define CGLOCBCEBEF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A17CE70)
#define CGLOCBCEBEF_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1A17CA60)
#define CGLOCBCEBEF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A17D420)
#define CGLOCBCEBEF_PPLHFHCKGGA_OFFSET UNITYSDK_OFFSET(0x1A17CE80)
#define CGLOCBCEBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17C780)

inline static constexpr unsigned int CGLOCBCEBEF_TypeDefinitionIndex = 9978;

class CGLOCBCEBEF : public ::System::Object
{
public:
	::CBCBKJPCKHB HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FCLFHPHCAIP; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BKAPHGJFJIH; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* HBFNIMAAOFJ; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* BCCLJENGLCA; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 LNDOJKEIPFI; // 0x4C
	::System::Int32 PCMOJLNOPPM; // 0x50

	::System::Void _ctor(::CBCBKJPCKHB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CBCBKJPCKHB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CGLOCBCEBEF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CLPIFPEGMFI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_CLPIFPEGMFI_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GEOGFBNCHMG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_GEOGFBNCHMG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PPLHFHCKGGA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_PPLHFHCKGGA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AEKNADMMCDG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_AEKNADMMCDG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLOCBCEBEF_COFGIJJOFLP_OFFSET))(this);
	}
};

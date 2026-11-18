#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HCPLLLODNJG_PackageTitleFileV2.h"

class OBBIKGGGMGB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCPLLLODNJG_DHOLMJGBMGB_FOCOMDKJKKA_OFFSET UNITYSDK_OFFSET(0x146F0760)
#define HCPLLLODNJG_DHOLMJGBMGB_JEPMCPLPGCL_OFFSET UNITYSDK_OFFSET(0x146F0330)
#define HCPLLLODNJG_DHOLMJGBMGB_LHMFFPFMKFF_OFFSET UNITYSDK_OFFSET(0x146F0A90)
#define HCPLLLODNJG_DHOLMJGBMGB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x146F0F10)
#define HCPLLLODNJG_DHOLMJGBMGB_MDJKOGBCELJ_OFFSET UNITYSDK_OFFSET(0x146F0AF0)
#define HCPLLLODNJG_DHOLMJGBMGB__CTOR_OFFSET UNITYSDK_OFFSET(0x146F0320)

inline static constexpr unsigned int HCPLLLODNJG_DHOLMJGBMGB_TypeDefinitionIndex = 49890;

class HCPLLLODNJG_DHOLMJGBMGB : public ::System::Object
{
public:
	// static const ::System::Int32 FJKNFBNKNKF = 0x2; // 0x0
	::OBBIKGGGMGB* GPNKCKIGADF; // 0x10

	::System::Void _ctor(::OBBIKGGGMGB* GPNKCKIGADF)
	{
		return ((::System::Void(*)(::PVOID, ::OBBIKGGGMGB*))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB__CTOR_OFFSET))(this, GPNKCKIGADF);
	}

	::System::Boolean JEPMCPLPGCL(::HCPLLLODNJG_PackageTitleFileV2& AFJDAAGFDCJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::HCPLLLODNJG_PackageTitleFileV2&))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB_JEPMCPLPGCL_OFFSET))(this, AFJDAAGFDCJ);
	}

	::System::Boolean FOCOMDKJKKA(::HCPLLLODNJG_PackageTitleFileV2& AFJDAAGFDCJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::HCPLLLODNJG_PackageTitleFileV2&))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB_FOCOMDKJKKA_OFFSET))(this, AFJDAAGFDCJ);
	}

	::System::Void LHMFFPFMKFF(::System::Collections::Generic::HashSet_1<::System::Int32>* IGOHJGFCHKJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* FOBNEJHHIOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB_LHMFFPFMKFF_OFFSET))(this, IGOHJGFCHKJ, FOBNEJHHIOC);
	}

	::System::Void LNFENFDLMIG(::System::Collections::Generic::List_1<::System::Int32>*& IGOHJGFCHKJ, ::System::Collections::Generic::List_1<::System::Int32>*& FOBNEJHHIOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB_LNFENFDLMIG_OFFSET))(this, IGOHJGFCHKJ, FOBNEJHHIOC);
	}

	::System::Boolean MDJKOGBCELJ(::System::Collections::Generic::HashSet_1<::System::Int32>* IGOHJGFCHKJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* FOBNEJHHIOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HCPLLLODNJG_DHOLMJGBMGB_MDJKOGBCELJ_OFFSET))(this, IGOHJGFCHKJ, FOBNEJHHIOC);
	}
};

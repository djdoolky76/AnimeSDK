#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class HFOPDHLEBHJ;
class HJJKAPBGCCI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAIMNADEDNB_BNFBNBMGPIA_OFFSET UNITYSDK_OFFSET(0x15353AF0)
#define DAIMNADEDNB_CGAPKFIEJOM_OFFSET UNITYSDK_OFFSET(0x15352FC0)
#define DAIMNADEDNB_CHHPFMHACDP_OFFSET UNITYSDK_OFFSET(0x153539D0)
#define DAIMNADEDNB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15353940)
#define DAIMNADEDNB_KJFMEEBDFMP_OFFSET UNITYSDK_OFFSET(0x15353380)
#define DAIMNADEDNB_LNMGMKGIAFB_OFFSET UNITYSDK_OFFSET(0x153536D0)
#define DAIMNADEDNB__CTOR_OFFSET UNITYSDK_OFFSET(0x15352FB0)

inline static constexpr unsigned int DAIMNADEDNB_TypeDefinitionIndex = 65618;

class DAIMNADEDNB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIMNADEDNB__CTOR_OFFSET))(this);
	}

	static ::System::Single CGAPKFIEJOM(::MoleMole::Config::BaseProperty BGJOPBCCMOC, ::HFOPDHLEBHJ* DEKJDEPKKLH)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty, ::HFOPDHLEBHJ*))((::PBYTE)hIl2Cpp + DAIMNADEDNB_CGAPKFIEJOM_OFFSET))(BGJOPBCCMOC, DEKJDEPKKLH);
	}

	static ::System::Void KJFMEEBDFMP(::MoleMole::Config::BaseProperty BGJOPBCCMOC, ::HFOPDHLEBHJ* DEKJDEPKKLH, ::System::Single& CAANMIFCCAP)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::HFOPDHLEBHJ*, ::System::Single&))((::PBYTE)hIl2Cpp + DAIMNADEDNB_KJFMEEBDFMP_OFFSET))(BGJOPBCCMOC, DEKJDEPKKLH, CAANMIFCCAP);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* LNMGMKGIAFB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + DAIMNADEDNB_LNMGMKGIAFB_OFFSET))();
	}

	static ::HJJKAPBGCCI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HJJKAPBGCCI*(*)(::System::Int32))((::PBYTE)hIl2Cpp + DAIMNADEDNB_IFDPKDOFOJD_OFFSET))(MGMDLMBEDJF);
	}

	static ::HFOPDHLEBHJ* CHHPFMHACDP(::System::Int32 MGMDLMBEDJF, ::DNOPJGNOPJO EGDLIGBDIHA)
	{
		return ((::HFOPDHLEBHJ*(*)(::System::Int32, ::DNOPJGNOPJO))((::PBYTE)hIl2Cpp + DAIMNADEDNB_CHHPFMHACDP_OFFSET))(MGMDLMBEDJF, EGDLIGBDIHA);
	}

	static ::System::Nullable_1<::DNOPJGNOPJO> BNFBNBMGPIA(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Nullable_1<::DNOPJGNOPJO>(*)(::System::Int32))((::PBYTE)hIl2Cpp + DAIMNADEDNB_BNFBNBMGPIA_OFFSET))(MGMDLMBEDJF);
	}
};

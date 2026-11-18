#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICLPLOAPBGO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMDOKGKKMEO_CBHGHHHODOI_OFFSET UNITYSDK_OFFSET(0x16FFB810)
#define AMDOKGKKMEO_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x16FFB7D0)
#define AMDOKGKKMEO_FGBEILANNNL_OFFSET UNITYSDK_OFFSET(0x16FFBF00)
#define AMDOKGKKMEO_GDNKFMIAHOM_OFFSET UNITYSDK_OFFSET(0x16FFBA10)
#define AMDOKGKKMEO_GKJIJEBIOGK_OFFSET UNITYSDK_OFFSET(0x16FFBD20)
#define AMDOKGKKMEO_GOGBLHKGHOC_OFFSET UNITYSDK_OFFSET(0x16FFBB40)
#define AMDOKGKKMEO_HNBAGNFFHJH_OFFSET UNITYSDK_OFFSET(0x16FFBF50)
#define AMDOKGKKMEO_OAJHBJJIMFF_OFFSET UNITYSDK_OFFSET(0x16FFBBF0)
#define AMDOKGKKMEO_OMFJHPLJCNM_OFFSET UNITYSDK_OFFSET(0x16FFBDD0)
#define AMDOKGKKMEO_OMGLKOFMJFO_OFFSET UNITYSDK_OFFSET(0x16FFB9C0)
#define AMDOKGKKMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFB960)

inline static constexpr unsigned int AMDOKGKKMEO_TypeDefinitionIndex = 61123;

class AMDOKGKKMEO : public ::System::Object
{
public:
	::System::String* JDGLEADFBEJ; // 0x10
	::System::Collections::Generic::List_1<::ICLPLOAPBGO>* BNBGGJNFIII; // 0x18
	::System::Collections::Generic::List_1<::ICLPLOAPBGO>* NJDGBMNLKHJ; // 0x20
	::System::Collections::Generic::List_1<::ICLPLOAPBGO>* OKLAEJMAOCL; // 0x28
	::System::Collections::Generic::List_1<::ICLPLOAPBGO>* KBHEIHKLPKB; // 0x30
	::ICLPLOAPBGO CDNFNBDEJFK; // 0x38
	::ICLPLOAPBGO GGOPFLNDJGB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOKGKKMEO__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void CBHGHHHODOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_CBHGHHHODOI_OFFSET))(this);
	}

	::System::Void OMGLKOFMJFO(::ICLPLOAPBGO& GIAEPMKCBIB)
	{
		return ((::System::Void(*)(::PVOID, ::ICLPLOAPBGO&))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_OMGLKOFMJFO_OFFSET))(this, GIAEPMKCBIB);
	}

	::System::Boolean GDNKFMIAHOM(::System::Int32 HINAHMCCNKO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_GDNKFMIAHOM_OFFSET))(this, HINAHMCCNKO);
	}

	::System::Void GOGBLHKGHOC(::ICLPLOAPBGO& MIGBOPKMDDL)
	{
		return ((::System::Void(*)(::PVOID, ::ICLPLOAPBGO&))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_GOGBLHKGHOC_OFFSET))(this, MIGBOPKMDDL);
	}

	::System::Int32 OAJHBJJIMFF(::System::Int32 EGELMKCGFOP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_OAJHBJJIMFF_OFFSET))(this, EGELMKCGFOP);
	}

	::System::Void GKJIJEBIOGK(::ICLPLOAPBGO& NALAPEBJFAG)
	{
		return ((::System::Void(*)(::PVOID, ::ICLPLOAPBGO&))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_GKJIJEBIOGK_OFFSET))(this, NALAPEBJFAG);
	}

	::System::Boolean OMFJHPLJCNM(::System::Int32 CNHPKBJOOFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_OMFJHPLJCNM_OFFSET))(this, CNHPKBJOOFI);
	}

	::System::Void FGBEILANNNL(::ICLPLOAPBGO& DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::ICLPLOAPBGO&))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_FGBEILANNNL_OFFSET))(this, DOBFFIICAII);
	}

	::System::Int32 HNBAGNFFHJH(::System::Int32 HBHOJFMOFJG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMDOKGKKMEO_HNBAGNFFHJH_OFFSET))(this, HBHOJFMOFJG);
	}
};

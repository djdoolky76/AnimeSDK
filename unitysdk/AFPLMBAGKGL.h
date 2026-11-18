#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class BMLCHLHIIMA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFPLMBAGKGL_AKDFBCJANML_OFFSET UNITYSDK_OFFSET(0x11B92E80)
#define AFPLMBAGKGL_HNKMMGMJEMO_OFFSET UNITYSDK_OFFSET(0x11B92FB0)
#define AFPLMBAGKGL_JOLKCJPHBFO_OFFSET UNITYSDK_OFFSET(0x11B92DB0)
#define AFPLMBAGKGL_KAJAPFMPANP_OFFSET UNITYSDK_OFFSET(0x11B92F50)
#define AFPLMBAGKGL_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x11B92EF0)
#define AFPLMBAGKGL_MINAKMCEIPK_OFFSET UNITYSDK_OFFSET(0x11B93070)
#define AFPLMBAGKGL_NNENIEONCGG_OFFSET UNITYSDK_OFFSET(0x11B92FC0)
#define AFPLMBAGKGL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11B92D70)
#define AFPLMBAGKGL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B92BB0)

inline static constexpr unsigned int AFPLMBAGKGL_TypeDefinitionIndex = 90078;

class AFPLMBAGKGL : public ::JJEJBPGJPJN
{
public:
	::BMLCHLHIIMA* _NACJKLLIFHE_k__BackingField; // 0x88

	::System::Void _ctor(::BMLCHLHIIMA* OFNFEEAJNID)
	{
		return ((::System::Void(*)(::PVOID, ::BMLCHLHIIMA*))((::PBYTE)hIl2Cpp + AFPLMBAGKGL__CTOR_OFFSET))(this, OFNFEEAJNID);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JOLKCJPHBFO(::System::Boolean EPCJIDEPONH)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_JOLKCJPHBFO_OFFSET))(this, EPCJIDEPONH);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Int32 KAJAPFMPANP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_KAJAPFMPANP_OFFSET))(this);
	}

	::System::Void HNKMMGMJEMO(::BMLCHLHIIMA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BMLCHLHIIMA*))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_HNKMMGMJEMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean AKDFBCJANML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_AKDFBCJANML_OFFSET))(this);
	}

	::System::String* NNENIEONCGG(::System::Boolean EPCJIDEPONH)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_NNENIEONCGG_OFFSET))(this, EPCJIDEPONH);
	}

	::BMLCHLHIIMA* MINAKMCEIPK()
	{
		return ((::BMLCHLHIIMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPLMBAGKGL_MINAKMCEIPK_OFFSET))(this);
	}
};

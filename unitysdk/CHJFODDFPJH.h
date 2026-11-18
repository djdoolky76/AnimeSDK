#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CHJFODDFPJH_APDGJGAPJHO_OFFSET UNITYSDK_OFFSET(0x139C8500)
#define CHJFODDFPJH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x139C6E10)
#define CHJFODDFPJH_EBHMODHELJJ_OFFSET UNITYSDK_OFFSET(0x139C8120)
#define CHJFODDFPJH_HBCNKELMDNF_OFFSET UNITYSDK_OFFSET(0x139C6D50)
#define CHJFODDFPJH_JGGCNGMEOCH_OFFSET UNITYSDK_OFFSET(0x139C7A70)
#define CHJFODDFPJH_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x139C8620)
#define CHJFODDFPJH_LOPNGKMMNLH_OFFSET UNITYSDK_OFFSET(0x139C87B0)
#define CHJFODDFPJH_MBHJJNFNGPE_1_OFFSET UNITYSDK_OFFSET(0x139C8520)
#define CHJFODDFPJH_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x139C74B0)
#define CHJFODDFPJH_MECIEJPPFIG_OFFSET UNITYSDK_OFFSET(0x139C8390)
#define CHJFODDFPJH_PEOOOEABHIH_OFFSET UNITYSDK_OFFSET(0x139C8210)
#define CHJFODDFPJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x139C8710)
#define CHJFODDFPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x139C6C50)

inline static constexpr unsigned int CHJFODDFPJH_TypeDefinitionIndex = 72606;

class CHJFODDFPJH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CHHLLLDBOGA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EOAHOOCNDHM>* KJECEADCOAM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJFODDFPJH__CTOR_OFFSET))(this);
	}

	::System::Void HBCNKELMDNF(::System::String* HIAIKHDFCLN, ::System::Int32 CAHBGBGHMPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CHJFODDFPJH_HBCNKELMDNF_OFFSET))(this, HIAIKHDFCLN, CAHBGBGHMPH);
	}

	::System::Void DGNAAPGKIPL(::CHJFODDFPJH* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CHJFODDFPJH*))((::PBYTE)hIl2Cpp + CHJFODDFPJH_DGNAAPGKIPL_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void MBHJJNFNGPE(::System::String* HIAIKHDFCLN, ::OMGFCFDABLN& LOACBJBANNC, ::DPKOIBEFPAO& HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::OMGFCFDABLN&, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + CHJFODDFPJH_MBHJJNFNGPE_OFFSET))(this, HIAIKHDFCLN, LOACBJBANNC, HFMHOELKCAJ);
	}

	::System::Void JGGCNGMEOCH(::CHJFODDFPJH* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CHJFODDFPJH*))((::PBYTE)hIl2Cpp + CHJFODDFPJH_JGGCNGMEOCH_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean PEOOOEABHIH(::System::String* HIAIKHDFCLN, ::OMGFCFDABLN& JIACOAGLDEG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + CHJFODDFPJH_PEOOOEABHIH_OFFSET))(this, HIAIKHDFCLN, JIACOAGLDEG);
	}

	::System::Boolean MECIEJPPFIG(::System::String* HIAIKHDFCLN, ::EOAHOOCNDHM& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + CHJFODDFPJH_MECIEJPPFIG_OFFSET))(this, HIAIKHDFCLN, HFMHOELKCAJ);
	}

	::System::Int32 APDGJGAPJHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJFODDFPJH_APDGJGAPJHO_OFFSET))(this);
	}

	::System::Boolean EBHMODHELJJ(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHJFODDFPJH_EBHMODHELJJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void MBHJJNFNGPE_1(::System::String* HIAIKHDFCLN, ::EOAHOOCNDHM& HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + CHJFODDFPJH_MBHJJNFNGPE_1_OFFSET))(this, HIAIKHDFCLN, HFMHOELKCAJ);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::EOAHOOCNDHM>>* KJGFHDAMHGO()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::EOAHOOCNDHM>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJFODDFPJH_KJGFHDAMHGO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJFODDFPJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean LOPNGKMMNLH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHJFODDFPJH_LOPNGKMMNLH_OFFSET))(this, HIAIKHDFCLN);
	}
};

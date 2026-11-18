#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLMHAMMALPB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FGIGDCFFPNI_AJGAIMBOHLC_OFFSET UNITYSDK_OFFSET(0x10F69340)
#define FGIGDCFFPNI_CHOKIAEFIFJ_OFFSET UNITYSDK_OFFSET(0x10F69540)
#define FGIGDCFFPNI_IBMIGHEHPHN_OFFSET UNITYSDK_OFFSET(0x10F69210)
#define FGIGDCFFPNI_IKNDKGGENJH_OFFSET UNITYSDK_OFFSET(0x10F692B0)
#define FGIGDCFFPNI_KLJDLABDFEL_OFFSET UNITYSDK_OFFSET(0x10F695D0)
#define FGIGDCFFPNI_NLLJAEAHLFA_OFFSET UNITYSDK_OFFSET(0x10F69250)
#define FGIGDCFFPNI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F692A0)

inline static constexpr unsigned int FGIGDCFFPNI_TypeDefinitionIndex = 67217;

class FGIGDCFFPNI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BBCMGINHDNK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* MPBHLKMHOLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIGDCFFPNI__CTOR_OFFSET))(this);
	}

	::System::Void IBMIGHEHPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_IBMIGHEHPHN_OFFSET))(this);
	}

	::System::Void NLLJAEAHLFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_NLLJAEAHLFA_OFFSET))(this);
	}

	::System::Void IKNDKGGENJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_IKNDKGGENJH_OFFSET))(this);
	}

	::System::Void AJGAIMBOHLC(::System::UInt32 MCOHLHMKLIP, ::System::Int32 GEGOALONGBI, ::System::Boolean ACFMHCMLKED)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_AJGAIMBOHLC_OFFSET))(this, MCOHLHMKLIP, GEGOALONGBI, ACFMHCMLKED);
	}

	::System::Int32 CHOKIAEFIFJ(::System::UInt32 MCOHLHMKLIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_CHOKIAEFIFJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void KLJDLABDFEL(::GLMHAMMALPB* KIMLAPEGALG)
	{
		return ((::System::Void(*)(::PVOID, ::GLMHAMMALPB*))((::PBYTE)hIl2Cpp + FGIGDCFFPNI_KLJDLABDFEL_OFFSET))(this, KIMLAPEGALG);
	}
};

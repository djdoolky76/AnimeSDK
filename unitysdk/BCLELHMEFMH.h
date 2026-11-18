#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIFBOKELGMC;
class DMCOENMKCFF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCLELHMEFMH_BEPJCABMIEJ_OFFSET UNITYSDK_OFFSET(0x113D9040)
#define BCLELHMEFMH_CJEAKAEDBCM_OFFSET UNITYSDK_OFFSET(0x113D92E0)
#define BCLELHMEFMH_FBFIDCPLKIF_OFFSET UNITYSDK_OFFSET(0x113D90C0)
#define BCLELHMEFMH_FPIOJGKPAJP_OFFSET UNITYSDK_OFFSET(0x113D92F0)
#define BCLELHMEFMH_GFAGJBHGLDG_OFFSET UNITYSDK_OFFSET(0x113D90B0)
#define BCLELHMEFMH_LCPPJLKIBFG_OFFSET UNITYSDK_OFFSET(0x113D9270)
#define BCLELHMEFMH_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x113D9260)
#define BCLELHMEFMH_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x113D9030)
#define BCLELHMEFMH_PIPELHNIJHE_OFFSET UNITYSDK_OFFSET(0x113D9250)
#define BCLELHMEFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x113D8CB0)

inline static constexpr unsigned int BCLELHMEFMH_TypeDefinitionIndex = 46815;

class BCLELHMEFMH : public ::System::Object
{
public:
	::CIFBOKELGMC* JECHCMCECLB; // 0x10
	::System::Collections::Generic::List_1<::DMCOENMKCFF*>* _BKLMIILCLDC_k__BackingField; // 0x18
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x20
	::System::Int32 _EKLJCAFBKMK_k__BackingField; // 0x24

	::System::Void _ctor(::CIFBOKELGMC* KMOHKCADPNA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::CIFBOKELGMC*, ::System::Int32))((::PBYTE)hIl2Cpp + BCLELHMEFMH__CTOR_OFFSET))(this, KMOHKCADPNA, ABHBKFJKINO);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCLELHMEFMH_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BEPJCABMIEJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_BEPJCABMIEJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::DMCOENMKCFF*>* GFAGJBHGLDG()
	{
		return ((::System::Collections::Generic::List_1<::DMCOENMKCFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_GFAGJBHGLDG_OFFSET))(this);
	}

	::System::Int32 FBFIDCPLKIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_FBFIDCPLKIF_OFFSET))(this);
	}

	::System::Void PIPELHNIJHE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCLELHMEFMH_PIPELHNIJHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 LCPPJLKIBFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_LCPPJLKIBFG_OFFSET))(this);
	}

	::System::Void CJEAKAEDBCM(::System::Collections::Generic::List_1<::DMCOENMKCFF*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DMCOENMKCFF*>*))((::PBYTE)hIl2Cpp + BCLELHMEFMH_CJEAKAEDBCM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FPIOJGKPAJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLELHMEFMH_FPIOJGKPAJP_OFFSET))(this);
	}
};

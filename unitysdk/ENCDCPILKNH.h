#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIMGGKIGCDD.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/MAJLBFFBJNP.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENCDCPILKNH_DPDPNNCHCBE_OFFSET UNITYSDK_OFFSET(0x1B8587D0)
#define ENCDCPILKNH_GKHHFGIAAGK_OFFSET UNITYSDK_OFFSET(0x1B8587B0)
#define ENCDCPILKNH_HDMBIPNPPDH_OFFSET UNITYSDK_OFFSET(0x1B858770)
#define ENCDCPILKNH_JPCMIKFNADC_OFFSET UNITYSDK_OFFSET(0x1B8587E0)
#define ENCDCPILKNH_KIDPINJIONI_OFFSET UNITYSDK_OFFSET(0x1B858790)
#define ENCDCPILKNH_KMBAOIPAIFM_OFFSET UNITYSDK_OFFSET(0x1B8587A0)
#define ENCDCPILKNH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1B858780)
#define ENCDCPILKNH_MJIEEJGIGMJ_OFFSET UNITYSDK_OFFSET(0x1B8587C0)
#define ENCDCPILKNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8586F0)

inline static constexpr unsigned int ENCDCPILKNH_TypeDefinitionIndex = 14377;

class ENCDCPILKNH : public ::HIMGGKIGCDD
{
public:
	::System::Collections::Generic::List_1<::System::UInt16>* _FHGGLFDCDKL_k__BackingField; // 0x70
	::System::Int32 _ACICLAPPPAN_k__BackingField; // 0x78
	::System::Byte _CPMAOIBBFPE_k__BackingField; // 0x7C
	::System::Boolean _BJBBAAOAFPI_k__BackingField; // 0x7D

	::System::Void _ctor(::MAJLBFFBJNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MAJLBFFBJNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ENCDCPILKNH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::UInt16>* HDMBIPNPPDH()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDCPILKNH_HDMBIPNPPDH_OFFSET))(this);
	}

	::System::Byte LPFMNKEFPMM()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDCPILKNH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Boolean KIDPINJIONI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDCPILKNH_KIDPINJIONI_OFFSET))(this);
	}

	::Share::EPropertyType KMBAOIPAIFM()
	{
		return ((::Share::EPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDCPILKNH_KMBAOIPAIFM_OFFSET))(this);
	}

	::System::Void GKHHFGIAAGK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENCDCPILKNH_GKHHFGIAAGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MJIEEJGIGMJ(::System::Byte EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ENCDCPILKNH_MJIEEJGIGMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPDPNNCHCBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDCPILKNH_DPDPNNCHCBE_OFFSET))(this);
	}

	::System::Void JPCMIKFNADC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENCDCPILKNH_JPCMIKFNADC_OFFSET))(this, EGEGIMGMJHN);
	}
};

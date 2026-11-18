#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class IBBCHAMOAJP;
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define MLFPKACPFDG_BEDFOACBPAJ_OFFSET UNITYSDK_OFFSET(0x18B53DB0)
#define MLFPKACPFDG_EJKBOPKKDOK_OFFSET UNITYSDK_OFFSET(0x18B53A90)
#define MLFPKACPFDG_FDGNAEFAEGG_OFFSET UNITYSDK_OFFSET(0x18B53B90)
#define MLFPKACPFDG_JPCGDJPMDPP_OFFSET UNITYSDK_OFFSET(0x18B53D40)
#define MLFPKACPFDG_KPGEPIEEIIE_OFFSET UNITYSDK_OFFSET(0x18B53B10)
#define MLFPKACPFDG_LNPPEFMAJFD_OFFSET UNITYSDK_OFFSET(0x18B53CD0)
#define MLFPKACPFDG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B539C0)
#define MLFPKACPFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B53A80)

inline static constexpr unsigned int MLFPKACPFDG_TypeDefinitionIndex = 39605;

class MLFPKACPFDG : public ::JJEJBPGJPJN
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* CJCDOAFINGB; // 0x88
	::NMANHEHIJAL_1<::IBBCHAMOAJP*>* EPKCGOKPGNC; // 0x90
	::DBMAHDDGMHM_1<::System::Int32>* HDLIPILELPH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPKACPFDG__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPKACPFDG_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void EJKBOPKKDOK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFPKACPFDG_EJKBOPKKDOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KPGEPIEEIIE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLFPKACPFDG_KPGEPIEEIIE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FDGNAEFAEGG(::System::Collections::Generic::IList_1<::IBBCHAMOAJP*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::IBBCHAMOAJP*>*))((::PBYTE)hIl2Cpp + MLFPKACPFDG_FDGNAEFAEGG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LNPPEFMAJFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPKACPFDG_LNPPEFMAJFD_OFFSET))(this);
	}

	::System::Boolean JPCGDJPMDPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPKACPFDG_JPCGDJPMDPP_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::IBBCHAMOAJP*>* BEDFOACBPAJ()
	{
		return ((::System::Collections::Generic::IList_1<::IBBCHAMOAJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPKACPFDG_BEDFOACBPAJ_OFFSET))(this);
	}
};

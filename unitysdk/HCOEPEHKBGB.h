#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOKKOEMOPFI.h"
#include "unitysdk/HCNAMJOCIIM.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole::Config { class HackChargeConfig; }
namespace System { class String; }

#define HCOEPEHKBGB_EHAICBAHOBE_OFFSET UNITYSDK_OFFSET(0x146EF6F0)
#define HCOEPEHKBGB_EKHHFJCNGPH_OFFSET UNITYSDK_OFFSET(0x146EF570)
#define HCOEPEHKBGB_FPICCLHNMIH_OFFSET UNITYSDK_OFFSET(0x146EF610)
#define HCOEPEHKBGB_GABBDAGNJBM_OFFSET UNITYSDK_OFFSET(0x146EF740)
#define HCOEPEHKBGB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x146EF450)
#define HCOEPEHKBGB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x146EF660)
#define HCOEPEHKBGB_JKDFBHJDNPP_OFFSET UNITYSDK_OFFSET(0x146EF6E0)
#define HCOEPEHKBGB_LKGEBMPKCKG_OFFSET UNITYSDK_OFFSET(0x146EF530)
#define HCOEPEHKBGB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x146EF580)
#define HCOEPEHKBGB_OGODENHLJLH_OFFSET UNITYSDK_OFFSET(0x146EF780)
#define HCOEPEHKBGB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x146EF3F0)
#define HCOEPEHKBGB__CCTOR_OFFSET UNITYSDK_OFFSET(0x146EF4A0)
#define HCOEPEHKBGB__CTOR_OFFSET UNITYSDK_OFFSET(0x146EF520)

inline static constexpr unsigned int HCOEPEHKBGB_TypeDefinitionIndex = 54499;

class HCOEPEHKBGB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x97; // 0x0
	::System::String* CCENKPLCABG; // 0x48
	::System::String* LMOEGACFOKG; // 0x50
	::System::Int32 HNBLPEAEEJI; // 0x58
	::System::Int32 MEILJFBODGP; // 0x5C
	::EOKKOEMOPFI AILKEJOLHHG; // 0x60
	::HCNAMJOCIIM BOKKHNPAGOA; // 0x64
	::System::Boolean NAIJJEEDGHJ; // 0x68
	::System::Boolean HKLAGIKIKKJ; // 0x69
	::System::Boolean JIGGALOHAEN; // 0x6A
	::System::Boolean AGKPOFKFHEN; // 0x6B

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCOEPEHKBGB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_GETCLASSID_OFFSET))(this);
	}

	::System::Void LKGEBMPKCKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_LKGEBMPKCKG_OFFSET))(this);
	}

	::System::Boolean EKHHFJCNGPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_EKHHFJCNGPH_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void FPICCLHNMIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_FPICCLHNMIH_OFFSET))(this);
	}

	static ::HCOEPEHKBGB* JFDOOELFAOA()
	{
		return ((::HCOEPEHKBGB*(*)())((::PBYTE)hIl2Cpp + HCOEPEHKBGB_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean JKDFBHJDNPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_JKDFBHJDNPP_OFFSET))(this);
	}

	::System::Void EHAICBAHOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_EHAICBAHOBE_OFFSET))(this);
	}

	::System::Void GABBDAGNJBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_GABBDAGNJBM_OFFSET))(this);
	}

	::System::Void OGODENHLJLH(::MoleMole::Config::HackChargeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackChargeConfig*))((::PBYTE)hIl2Cpp + HCOEPEHKBGB_OGODENHLJLH_OFFSET))(this, DFMKILICPFB);
	}
};

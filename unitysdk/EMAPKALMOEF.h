#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define EMAPKALMOEF_COJGFLIFNDA_OFFSET UNITYSDK_OFFSET(0x11CB85F0)
#define EMAPKALMOEF_IBANLONOBEB_OFFSET UNITYSDK_OFFSET(0x11CB8680)
#define EMAPKALMOEF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11CB8600)
#define EMAPKALMOEF_LFBBNFCAMHM_OFFSET UNITYSDK_OFFSET(0x11CB8670)
#define EMAPKALMOEF_MNHOGLHKGMC_OFFSET UNITYSDK_OFFSET(0x11CB85E0)
#define EMAPKALMOEF__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB85D0)

inline static constexpr unsigned int EMAPKALMOEF_TypeDefinitionIndex = 69911;

class EMAPKALMOEF : public ::IGKOFMFKNNO
{
public:
	::System::Int32 _FINMOFGPNPI_k__BackingField; // 0x10
	::System::Int32 _PDHKCHKJKFM_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAPKALMOEF__CTOR_OFFSET))(this);
	}

	::System::Int32 MNHOGLHKGMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAPKALMOEF_MNHOGLHKGMC_OFFSET))(this);
	}

	::System::Void COJGFLIFNDA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMAPKALMOEF_COJGFLIFNDA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::EMAPKALMOEF* JFDOOELFAOA()
	{
		return ((::EMAPKALMOEF*(*)())((::PBYTE)hIl2Cpp + EMAPKALMOEF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void LFBBNFCAMHM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMAPKALMOEF_LFBBNFCAMHM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IBANLONOBEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAPKALMOEF_IBANLONOBEB_OFFSET))(this);
	}
};

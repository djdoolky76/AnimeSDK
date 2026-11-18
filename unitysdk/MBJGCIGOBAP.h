#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JADCGCGMAJE.h"
#include "unitysdk/System/Object.h"

class ACFFGLKPMJO;

#define MBJGCIGOBAP_CNILOAOCPAP_OFFSET UNITYSDK_OFFSET(0x16C71410)
#define MBJGCIGOBAP_DEGDCGLGMNG_OFFSET UNITYSDK_OFFSET(0x16C71280)
#define MBJGCIGOBAP_EDHFAOGGDAJ_OFFSET UNITYSDK_OFFSET(0x16C710F0)
#define MBJGCIGOBAP_GHAKCPPAPAI_OFFSET UNITYSDK_OFFSET(0x16C71230)
#define MBJGCIGOBAP_OECPCOEEODG_OFFSET UNITYSDK_OFFSET(0x16C711B0)
#define MBJGCIGOBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C710D0)

inline static constexpr unsigned int MBJGCIGOBAP_TypeDefinitionIndex = 71680;

class MBJGCIGOBAP : public ::System::Object
{
public:
	::ACFFGLKPMJO* PJMIGCOCJMK; // 0x10
	::JADCGCGMAJE MKJFHCIDCDK; // 0x18
	::System::Single HLFIJONMDEM; // 0x1C
	::System::Single HMJJMFBLNIP; // 0x20
	::System::Single EKGMLLJEJHM; // 0x24
	::System::Single FIKKGGCAHPM; // 0x28
	::System::Single FPGIDFEGFCE; // 0x2C
	::System::Single LHGBFNLIJJC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJGCIGOBAP__CTOR_OFFSET))(this);
	}

	::System::Void EDHFAOGGDAJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBJGCIGOBAP_EDHFAOGGDAJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OECPCOEEODG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJGCIGOBAP_OECPCOEEODG_OFFSET))(this);
	}

	::System::Void GHAKCPPAPAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJGCIGOBAP_GHAKCPPAPAI_OFFSET))(this);
	}

	::System::Void DEGDCGLGMNG(::ACFFGLKPMJO* PBICNKPNJLG)
	{
		return ((::System::Void(*)(::PVOID, ::ACFFGLKPMJO*))((::PBYTE)hIl2Cpp + MBJGCIGOBAP_DEGDCGLGMNG_OFFSET))(this, PBICNKPNJLG);
	}

	::System::Void CNILOAOCPAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJGCIGOBAP_CNILOAOCPAP_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
namespace System { class Action; }

#define MNBCBNIEAMG_LAHDDBOCEBE_CNPEJEEHNKI_OFFSET UNITYSDK_OFFSET(0x177CF7A0)
#define MNBCBNIEAMG_LAHDDBOCEBE_NBOLJEGAPCK_OFFSET UNITYSDK_OFFSET(0x177CF5B0)
#define MNBCBNIEAMG_LAHDDBOCEBE_PDOOAMDEMKM_OFFSET UNITYSDK_OFFSET(0x177CF6B0)
#define MNBCBNIEAMG_LAHDDBOCEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x177CF5A0)

inline static constexpr unsigned int MNBCBNIEAMG_LAHDDBOCEBE_TypeDefinitionIndex = 76598;

class MNBCBNIEAMG_LAHDDBOCEBE : public ::System::Object
{
public:
	::IANDOOLAALI_DLAAJNDJPLO* FPNLKPJNCGK; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Int32 NACGJJKHEJE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_LAHDDBOCEBE__CTOR_OFFSET))(this);
	}

	::System::Void NBOLJEGAPCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_LAHDDBOCEBE_NBOLJEGAPCK_OFFSET))(this);
	}

	::System::Void PDOOAMDEMKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_LAHDDBOCEBE_PDOOAMDEMKM_OFFSET))(this);
	}

	::System::Void CNPEJEEHNKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_LAHDDBOCEBE_CNPEJEEHNKI_OFFSET))(this);
	}
};

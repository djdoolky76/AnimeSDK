#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"
#include "unitysdk/OHMDBIMBNHF.h"

#define DMMBFLEPMMN_CHMPPDAJMBP_OFFSET UNITYSDK_OFFSET(0xFDC6A70)
#define DMMBFLEPMMN_DBILKHJPKPK_OFFSET UNITYSDK_OFFSET(0xFDC6A90)
#define DMMBFLEPMMN_DEADJIOEONL_OFFSET UNITYSDK_OFFSET(0xFDC6A50)
#define DMMBFLEPMMN_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0xFDC6A40)
#define DMMBFLEPMMN_KNJFKMOCLPC_OFFSET UNITYSDK_OFFSET(0xFDC6A80)
#define DMMBFLEPMMN_LLIEHLDKNLG_OFFSET UNITYSDK_OFFSET(0xFDC6A60)
#define DMMBFLEPMMN_MGDGPECIGDH_OFFSET UNITYSDK_OFFSET(0xFDC6AB0)
#define DMMBFLEPMMN_MKMPDOHMDMF_OFFSET UNITYSDK_OFFSET(0xFDC6AA0)
#define DMMBFLEPMMN_NJPPAHLLALB_OFFSET UNITYSDK_OFFSET(0xFDC6AC0)
#define DMMBFLEPMMN_PAMNPGMBFEH_OFFSET UNITYSDK_OFFSET(0xFDC6AD0)
#define DMMBFLEPMMN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC6A30)

inline static constexpr unsigned int DMMBFLEPMMN_TypeDefinitionIndex = 61757;

class DMMBFLEPMMN : public ::JNAGFFCCOHI
{
public:
	::Il2CppArray<::System::UInt32>* _PHAMBIPJNMO_k__BackingField; // 0x18
	::Il2CppArray<::System::UInt32>* _EOFLGMLJJLF_k__BackingField; // 0x20
	::System::UInt32 _IHPHJGGFABP_k__BackingField; // 0x28
	::System::Int32 _FFLAEPIDDKN_k__BackingField; // 0x2C
	::OHMDBIMBNHF _KLBJADNMDMC_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN__CTOR_OFFSET))(this);
	}

	::System::UInt32 HJEFCNNHHEO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Void DEADJIOEONL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_DEADJIOEONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LLIEHLDKNLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_LLIEHLDKNLG_OFFSET))(this);
	}

	::OHMDBIMBNHF CHMPPDAJMBP()
	{
		return ((::OHMDBIMBNHF(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_CHMPPDAJMBP_OFFSET))(this);
	}

	::System::Void KNJFKMOCLPC(::OHMDBIMBNHF EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OHMDBIMBNHF))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_KNJFKMOCLPC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DBILKHJPKPK(::Il2CppArray<::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_DBILKHJPKPK_OFFSET))(this, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::UInt32>* MKMPDOHMDMF()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_MKMPDOHMDMF_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* MGDGPECIGDH()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_MGDGPECIGDH_OFFSET))(this);
	}

	::System::Void NJPPAHLLALB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_NJPPAHLLALB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PAMNPGMBFEH(::Il2CppArray<::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMMBFLEPMMN_PAMNPGMBFEH_OFFSET))(this, EGEGIMGMJHN);
	}
};

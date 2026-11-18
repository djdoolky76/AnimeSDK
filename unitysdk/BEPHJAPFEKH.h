#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NAJPIAGIKHF;

#define BEPHJAPFEKH_AAFKDLBNMFN_OFFSET UNITYSDK_OFFSET(0x1822F920)
#define BEPHJAPFEKH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x1822F8A0)
#define BEPHJAPFEKH_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x1822F890)
#define BEPHJAPFEKH_EJKBOPKKDOK_OFFSET UNITYSDK_OFFSET(0x1822F910)
#define BEPHJAPFEKH_FFBHNHMMMHE_OFFSET UNITYSDK_OFFSET(0x1822F880)
#define BEPHJAPFEKH_GFGKABKHBND_OFFSET UNITYSDK_OFFSET(0x1822F870)
#define BEPHJAPFEKH_HEKLAFGEABH_OFFSET UNITYSDK_OFFSET(0x1822F860)
#define BEPHJAPFEKH_JBKCIELFGHL_OFFSET UNITYSDK_OFFSET(0x1822F8C0)
#define BEPHJAPFEKH_JPCGDJPMDPP_OFFSET UNITYSDK_OFFSET(0x1822F8B0)
#define BEPHJAPFEKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1822F830)

inline static constexpr unsigned int BEPHJAPFEKH_TypeDefinitionIndex = 83842;

class BEPHJAPFEKH : public ::System::Object
{
public:
	::System::UInt32 _JFPALPENGNB_k__BackingField; // 0x10
	::System::Boolean _ALNBGNKANPN_k__BackingField; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int64 _FBJBBPAIDPH_k__BackingField; // 0x18

	::System::Void _ctor(::NAJPIAGIKHF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::NAJPIAGIKHF*))((::PBYTE)hIl2Cpp + BEPHJAPFEKH__CTOR_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Int64 HEKLAFGEABH()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_HEKLAFGEABH_OFFSET))(this);
	}

	::System::Void GFGKABKHBND(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_GFGKABKHBND_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FFBHNHMMMHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_FFBHNHMMMHE_OFFSET))(this);
	}

	::System::Void DPJGFIFIKOM(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean JPCGDJPMDPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_JPCGDJPMDPP_OFFSET))(this);
	}

	::System::Void JBKCIELFGHL(::System::Int64 OJIEBBCKHGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_JBKCIELFGHL_OFFSET))(this, OJIEBBCKHGN);
	}

	::System::Void EJKBOPKKDOK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_EJKBOPKKDOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean AAFKDLBNMFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHJAPFEKH_AAFKDLBNMFN_OFFSET))(this);
	}
};

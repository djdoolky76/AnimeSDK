#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKADNKKFCOK_BJCDFNJBCMC.h"
#include "unitysdk/System/ValueType.h"

#define CKADNKKFCOK_AGLPMBIDBCL_OFFSET UNITYSDK_OFFSET(0x359320)
#define CKADNKKFCOK_DAMFKNKOKPC_OFFSET UNITYSDK_OFFSET(0x359150)
#define CKADNKKFCOK_EEEPLBDHMGM_OFFSET UNITYSDK_OFFSET(0x409330)
#define CKADNKKFCOK_KGOOEINOFAE_OFFSET UNITYSDK_OFFSET(0x5C7520)
#define CKADNKKFCOK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A13760)
#define CKADNKKFCOK__CTOR_OFFSET UNITYSDK_OFFSET(0x42D1C0)

inline static constexpr unsigned int CKADNKKFCOK_TypeDefinitionIndex = 66289;

struct alignas(4) CKADNKKFCOK
{
	static ::CKADNKKFCOK* StaticGet_DDGNFJDLOKA()
	{
		return (::CKADNKKFCOK*)Il2CppClass::FromTypeDefinitionIndex(CKADNKKFCOK_TypeDefinitionIndex)->GetStaticField(0xC610);
	}
	::CKADNKKFCOK_BJCDFNJBCMC _BFHCGLEFCHP_k__BackingField; // 0x10
	::System::Single _LLONBOIFEGF_k__BackingField; // 0x14

	::System::Void _ctor(::CKADNKKFCOK_BJCDFNJBCMC IAFBELAOLDG, ::System::Single KHPPKNBOGIB)
	{
		return ((::System::Void(*)(::PVOID, ::CKADNKKFCOK_BJCDFNJBCMC, ::System::Single))((::PBYTE)hIl2Cpp + CKADNKKFCOK__CTOR_OFFSET))(this, IAFBELAOLDG, KHPPKNBOGIB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKADNKKFCOK__CCTOR_OFFSET))();
	}

	::System::Single EEEPLBDHMGM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CKADNKKFCOK_EEEPLBDHMGM_OFFSET))(this);
	}

	::CKADNKKFCOK_BJCDFNJBCMC AGLPMBIDBCL()
	{
		return ((::CKADNKKFCOK_BJCDFNJBCMC(*)(::PVOID))((::PBYTE)hIl2Cpp + CKADNKKFCOK_AGLPMBIDBCL_OFFSET))(this);
	}

	::System::Void KGOOEINOFAE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKADNKKFCOK_KGOOEINOFAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DAMFKNKOKPC(::CKADNKKFCOK_BJCDFNJBCMC EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CKADNKKFCOK_BJCDFNJBCMC))((::PBYTE)hIl2Cpp + CKADNKKFCOK_DAMFKNKOKPC_OFFSET))(this, EGEGIMGMJHN);
	}
};

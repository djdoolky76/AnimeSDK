#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MIKHEAIGKJI.h"

#define DPMENLAPDCN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16BC6B10)
#define DPMENLAPDCN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16BC6BB0)
#define DPMENLAPDCN_FOGPPEJBBBK_OFFSET UNITYSDK_OFFSET(0x16BC6BA0)
#define DPMENLAPDCN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16BC6A80)
#define DPMENLAPDCN_MODDEDLNBBC_OFFSET UNITYSDK_OFFSET(0x16BC6C40)
#define DPMENLAPDCN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC6A00)
#define DPMENLAPDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC6A70)

inline static constexpr unsigned int DPMENLAPDCN_TypeDefinitionIndex = 54849;

class DPMENLAPDCN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC9; // 0x0
	::MIKHEAIGKJI _HKCNJBLPPNE_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMENLAPDCN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMENLAPDCN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMENLAPDCN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::MIKHEAIGKJI BNNEDIOLIND)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MIKHEAIGKJI))((::PBYTE)hIl2Cpp + DPMENLAPDCN_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, BNNEDIOLIND);
	}

	::MIKHEAIGKJI FOGPPEJBBBK()
	{
		return ((::MIKHEAIGKJI(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMENLAPDCN_FOGPPEJBBBK_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMENLAPDCN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void MODDEDLNBBC(::MIKHEAIGKJI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MIKHEAIGKJI))((::PBYTE)hIl2Cpp + DPMENLAPDCN_MODDEDLNBBC_OFFSET))(this, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"
#include "unitysdk/MNAGAGOHIGH.h"

class CBKCCDGFNHH;
class HHMKCBFMIGN;

#define MPJPLFAFGDM_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x164F8830)
#define MPJPLFAFGDM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x164F8940)
#define MPJPLFAFGDM_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x164F8AE0)
#define MPJPLFAFGDM_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x164F8A50)
#define MPJPLFAFGDM_KNBPDDLNKAH_OFFSET UNITYSDK_OFFSET(0x164F8A00)
#define MPJPLFAFGDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x164F8510)
#define MPJPLFAFGDM__CTOR_OFFSET UNITYSDK_OFFSET(0x164F89C0)

inline static constexpr unsigned int MPJPLFAFGDM_TypeDefinitionIndex = 84350;

class MPJPLFAFGDM : public ::BBKFNNHAKBP
{
public:
	::HHMKCBFMIGN* OCOPPOCOAJA; // 0x38
	::CBKCCDGFNHH* ILNIJPFOPOA; // 0x40
	::System::Single PDJKHPKBLFD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void KNBPDDLNKAH(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_KNBPDDLNKAH_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJPLFAFGDM_CMFOIAAGPFL_OFFSET))(this);
	}
};

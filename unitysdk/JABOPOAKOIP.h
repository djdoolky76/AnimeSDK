#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFIEJHHKEOL.h"

class JKHNCKENNKN;
class PHICPBCACKJ;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectDamageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JABOPOAKOIP_IBLCAGBKGBF_OFFSET UNITYSDK_OFFSET(0x1EE553B0)
#define JABOPOAKOIP_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x1EE564B0)
#define JABOPOAKOIP_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x1EE562F0)
#define JABOPOAKOIP_MHBDNIJPBOG_OFFSET UNITYSDK_OFFSET(0x1EE564C0)
#define JABOPOAKOIP_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1EE551B0)
#define JABOPOAKOIP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1EE56270)
#define JABOPOAKOIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE56430)

inline static constexpr unsigned int JABOPOAKOIP_TypeDefinitionIndex = 94752;

class JABOPOAKOIP : public ::KFIEJHHKEOL
{
public:
	::System::Collections::Generic::List_1<::PHICPBCACKJ*>* FDEGOBAIKAE; // 0x60
	::JKHNCKENNKN* GJKKPBCJGHD; // 0x68
	::PHICPBCACKJ* KHMGFHNIDCB; // 0x70
	::MoleMole::Arcade::CompanionProject::CpSkillEffectDamageData* KJFPEDEODNM; // 0x78
	::System::UInt32 _ONJLBBNGNOE_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABOPOAKOIP__CTOR_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABOPOAKOIP_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JABOPOAKOIP_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LGAFACFIAGI(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JABOPOAKOIP_LGAFACFIAGI_OFFSET))(this, MBEMOHDDEMA);
	}

	::System::UInt32 ICOELJNGAPB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABOPOAKOIP_ICOELJNGAPB_OFFSET))(this);
	}

	::System::Void MHBDNIJPBOG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABOPOAKOIP_MHBDNIJPBOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IBLCAGBKGBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABOPOAKOIP_IBLCAGBKGBF_OFFSET))(this);
	}
};

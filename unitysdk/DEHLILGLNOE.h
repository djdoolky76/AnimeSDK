#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLILGLNOE_MEKLPILNHPG.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DEHLILGLNOE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x7F6E570)
#define DEHLILGLNOE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x7F6E8B0)
#define DEHLILGLNOE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x7F6E4E0)
#define DEHLILGLNOE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x7F6E810)
#define DEHLILGLNOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x7F6E370)
#define DEHLILGLNOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F6E460)
#define DEHLILGLNOE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6E4D0)

inline static constexpr unsigned int DEHLILGLNOE_TypeDefinitionIndex = 77403;

class DEHLILGLNOE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* JAOLLOFNHLD; // 0x20
	::DEHLILGLNOE_MEKLPILNHPG IMHCFBALLOE; // 0x28
	::MoleMole::Config::AidAttackType ONLHMFMOEDH; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHLILGLNOE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLILGLNOE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLILGLNOE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLILGLNOE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::DEHLILGLNOE_MEKLPILNHPG BJONBLDFNHC, ::MoleMole::Config::AidAttackType BDEHHCAEMJC, ::System::Collections::Generic::HashSet_1<::System::String*>* FDPAMICJHOA)
	{
		return ((::System::Void(*)(::PVOID, ::DEHLILGLNOE_MEKLPILNHPG, ::MoleMole::Config::AidAttackType, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + DEHLILGLNOE_CNHBDOMKKDE_OFFSET))(this, BJONBLDFNHC, BDEHHCAEMJC, FDPAMICJHOA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLILGLNOE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLILGLNOE_FIGPAOKNJLN_OFFSET))(this);
	}
};

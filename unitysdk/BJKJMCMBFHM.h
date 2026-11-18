#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJKJMCMBFHM_FJGLBEJCFBE.h"
#include "unitysdk/BJKJMCMBFHM_LHKGBOOKBPD.h"
#include "unitysdk/DOILEFIOJDE.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IFNCGEHFDLK.h"
#include "unitysdk/KNPMCIAOJPL.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BJKJMCMBFHM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFF7FCE0)
#define BJKJMCMBFHM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFF80030)
#define BJKJMCMBFHM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFF7FBB0)
#define BJKJMCMBFHM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFF7FC40)
#define BJKJMCMBFHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFF7FA30)
#define BJKJMCMBFHM__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF7FB10)
#define BJKJMCMBFHM__CTOR_OFFSET UNITYSDK_OFFSET(0xFF7FB80)

inline static constexpr unsigned int BJKJMCMBFHM_TypeDefinitionIndex = 62568;

class BJKJMCMBFHM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1D; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* JAOLLOFNHLD; // 0x20
	::System::String* FNOEJNCDBGE; // 0x28
	::LGKJFOFLBFG OBNIAHNMHPF; // 0x30
	::MoleMole::Config::AidAttackType ONLHMFMOEDH; // 0x34
	::KNPMCIAOJPL KIAKFOGFCAK; // 0x38
	::IFNCGEHFDLK FKFLAFCGLAO; // 0x3C
	::DOILEFIOJDE CFDCAGMDEEF; // 0x40
	::BJKJMCMBFHM_LHKGBOOKBPD EBCGAJOJAKA; // 0x44
	::System::Boolean BJELJCAOGOB; // 0x48
	::System::Byte _padding0[0x3];
	::BJKJMCMBFHM_FJGLBEJCFBE JKBLDFBGBPK; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKJMCMBFHM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKJMCMBFHM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKJMCMBFHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKJMCMBFHM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKJMCMBFHM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::BJKJMCMBFHM_FJGLBEJCFBE JKBLDFBGBPK, ::LGKJFOFLBFG FGDPOAFBDID, ::KNPMCIAOJPL KIAKFOGFCAK, ::MoleMole::Config::AidAttackType ONLHMFMOEDH, ::DOILEFIOJDE CFDCAGMDEEF, ::IFNCGEHFDLK FKFLAFCGLAO, ::System::Collections::Generic::HashSet_1<::System::String*>* FDPAMICJHOA, ::System::Boolean HFMOEMOFEMH, ::System::String* CMJIFFHOGEA)
	{
		return ((::System::Void(*)(::PVOID, ::BJKJMCMBFHM_FJGLBEJCFBE, ::LGKJFOFLBFG, ::KNPMCIAOJPL, ::MoleMole::Config::AidAttackType, ::DOILEFIOJDE, ::IFNCGEHFDLK, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BJKJMCMBFHM_CNHBDOMKKDE_OFFSET))(this, JKBLDFBGBPK, FGDPOAFBDID, KIAKFOGFCAK, ONLHMFMOEDH, CFDCAGMDEEF, FKFLAFCGLAO, FDPAMICJHOA, HFMOEMOFEMH, CMJIFFHOGEA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKJMCMBFHM_FIGPAOKNJLN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOILEFIOJDE.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IFNCGEHFDLK.h"
#include "unitysdk/KNPMCIAOJPL.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/NCKLABCEIDG_BEMIGLLMJBK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NCKLABCEIDG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16B63B60)
#define NCKLABCEIDG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16B63A30)
#define NCKLABCEIDG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16B639A0)
#define NCKLABCEIDG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16B63AC0)
#define NCKLABCEIDG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16B63820)
#define NCKLABCEIDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B63900)
#define NCKLABCEIDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B63970)

inline static constexpr unsigned int NCKLABCEIDG_TypeDefinitionIndex = 48591;

class NCKLABCEIDG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1E; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* JAOLLOFNHLD; // 0x20
	::System::String* FNOEJNCDBGE; // 0x28
	::LGKJFOFLBFG OBNIAHNMHPF; // 0x30
	::NCKLABCEIDG_BEMIGLLMJBK JKBLDFBGBPK; // 0x34
	::DOILEFIOJDE CFDCAGMDEEF; // 0x38
	::IFNCGEHFDLK FKFLAFCGLAO; // 0x3C
	::System::Boolean BJELJCAOGOB; // 0x40
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AidAttackType ONLHMFMOEDH; // 0x44
	::KNPMCIAOJPL KIAKFOGFCAK; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKLABCEIDG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLABCEIDG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLABCEIDG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLABCEIDG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLABCEIDG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLABCEIDG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::NCKLABCEIDG_BEMIGLLMJBK JKBLDFBGBPK, ::LGKJFOFLBFG OBNIAHNMHPF, ::KNPMCIAOJPL KIAKFOGFCAK, ::MoleMole::Config::AidAttackType ONLHMFMOEDH, ::DOILEFIOJDE CFDCAGMDEEF, ::IFNCGEHFDLK FKFLAFCGLAO, ::System::Collections::Generic::HashSet_1<::System::String*>* FDPAMICJHOA, ::System::Boolean HFMOEMOFEMH, ::System::String* CMJIFFHOGEA)
	{
		return ((::System::Void(*)(::PVOID, ::NCKLABCEIDG_BEMIGLLMJBK, ::LGKJFOFLBFG, ::KNPMCIAOJPL, ::MoleMole::Config::AidAttackType, ::DOILEFIOJDE, ::IFNCGEHFDLK, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NCKLABCEIDG_CNHBDOMKKDE_OFFSET))(this, JKBLDFBGBPK, OBNIAHNMHPF, KIAKFOGFCAK, ONLHMFMOEDH, CFDCAGMDEEF, FKFLAFCGLAO, FDPAMICJHOA, HFMOEMOFEMH, CMJIFFHOGEA);
	}
};

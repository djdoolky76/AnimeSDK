#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MKGOEBFLHLP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x151E8180)
#define MKGOEBFLHLP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x151E80F0)
#define MKGOEBFLHLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x151E8070)
#define MKGOEBFLHLP__CTOR_OFFSET UNITYSDK_OFFSET(0x151E80E0)

inline static constexpr unsigned int MKGOEBFLHLP_TypeDefinitionIndex = 69963;

class MKGOEBFLHLP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x21; // 0x0
	::System::UInt32 LJIBLLDJLJG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKGOEBFLHLP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOEBFLHLP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOEBFLHLP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOEBFLHLP_FIGPAOKNJLN_OFFSET))(this);
	}
};

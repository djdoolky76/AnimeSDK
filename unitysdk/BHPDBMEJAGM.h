#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPDBMEJAGM_CNOKADDPLKL.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BHPDBMEJAGM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x113E9A80)
#define BHPDBMEJAGM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x113E9AE0)
#define BHPDBMEJAGM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x113E99F0)
#define BHPDBMEJAGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x113E9970)
#define BHPDBMEJAGM__CTOR_OFFSET UNITYSDK_OFFSET(0x113E99E0)

inline static constexpr unsigned int BHPDBMEJAGM_TypeDefinitionIndex = 41694;

class BHPDBMEJAGM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x142; // 0x0
	::BHPDBMEJAGM_CNOKADDPLKL MNHPKOCADDI; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHPDBMEJAGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDBMEJAGM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDBMEJAGM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::BHPDBMEJAGM_CNOKADDPLKL FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BHPDBMEJAGM_CNOKADDPLKL))((::PBYTE)hIl2Cpp + BHPDBMEJAGM_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, FKMHMOELCIO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDBMEJAGM_FIGPAOKNJLN_OFFSET))(this);
	}
};

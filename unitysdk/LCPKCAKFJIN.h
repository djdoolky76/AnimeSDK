#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LCPKCAKFJIN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A2ED590)
#define LCPKCAKFJIN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A2ED500)
#define LCPKCAKFJIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED480)
#define LCPKCAKFJIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED4F0)

inline static constexpr unsigned int LCPKCAKFJIN_TypeDefinitionIndex = 58075;

class LCPKCAKFJIN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCE; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCPKCAKFJIN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPKCAKFJIN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPKCAKFJIN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPKCAKFJIN_FIGPAOKNJLN_OFFSET))(this);
	}
};

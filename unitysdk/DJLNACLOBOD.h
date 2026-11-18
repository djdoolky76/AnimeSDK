#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DJLNACLOBOD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13E53BB0)
#define DJLNACLOBOD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13E53B20)
#define DJLNACLOBOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E53AA0)
#define DJLNACLOBOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E53B10)

inline static constexpr unsigned int DJLNACLOBOD_TypeDefinitionIndex = 91130;

class DJLNACLOBOD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLNACLOBOD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLNACLOBOD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLNACLOBOD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLNACLOBOD_FIGPAOKNJLN_OFFSET))(this);
	}
};

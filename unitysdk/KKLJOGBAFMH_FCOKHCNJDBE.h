#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KKLJOGBAFMH_FCOKHCNJDBE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17662760)
#define KKLJOGBAFMH_FCOKHCNJDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x17662750)

inline static constexpr unsigned int KKLJOGBAFMH_FCOKHCNJDBE_TypeDefinitionIndex = 53108;

class KKLJOGBAFMH_FCOKHCNJDBE : public ::System::Object
{
public:
	::HOCDHMEPPEG PHHDHIBOCKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLJOGBAFMH_FCOKHCNJDBE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLJOGBAFMH_FCOKHCNJDBE_LIDNPLMPHAL_OFFSET))(this);
	}
};

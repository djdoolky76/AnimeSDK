#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FLNMLENGKKD_BIBPOFEEAEH;

#define FLNMLENGKKD_HEPEENMJPNN_LCMLFMCLJNG_OFFSET UNITYSDK_OFFSET(0x10EC0EE0)
#define FLNMLENGKKD_HEPEENMJPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC0ED0)

inline static constexpr unsigned int FLNMLENGKKD_HEPEENMJPNN_TypeDefinitionIndex = 87462;

class FLNMLENGKKD_HEPEENMJPNN : public ::System::Object
{
public:
	::FLNMLENGKKD_BIBPOFEEAEH* FGBNBFHOKAA; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMLENGKKD_HEPEENMJPNN__CTOR_OFFSET))(this);
	}

	::System::Void LCMLFMCLJNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMLENGKKD_HEPEENMJPNN_LCMLFMCLJNG_OFFSET))(this);
	}
};

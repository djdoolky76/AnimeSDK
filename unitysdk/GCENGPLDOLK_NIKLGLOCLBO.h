#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCENGPLDOLK;
class NGJGLFFBIFB;

#define GCENGPLDOLK_NIKLGLOCLBO__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9D520)

inline static constexpr unsigned int GCENGPLDOLK_NIKLGLOCLBO_TypeDefinitionIndex = 58172;

class GCENGPLDOLK_NIKLGLOCLBO : public ::System::Object
{
public:
	::NGJGLFFBIFB* PADJNMGMGHO; // 0x10
	::NGJGLFFBIFB* KDEHMPGOCEP; // 0x18
	::GCENGPLDOLK* KLHPEBKNIFB; // 0x20
	::System::Int32 MFIONBMNPCC; // 0x28
	::System::Int32 EJKHEBIEKDE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_NIKLGLOCLBO__CTOR_OFFSET))(this);
	}
};

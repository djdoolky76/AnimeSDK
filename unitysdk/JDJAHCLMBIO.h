#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPGMCPOBLOB;
class LFLOPKKHMJM;

#define JDJAHCLMBIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1980CD10)

inline static constexpr unsigned int JDJAHCLMBIO_TypeDefinitionIndex = 92912;

class JDJAHCLMBIO : public ::System::Object
{
public:
	::DPGMCPOBLOB* FMANNNBNICF; // 0x10
	::LFLOPKKHMJM* LJBPECKCCEA; // 0x18
	::System::Boolean OGAPCEJFIFO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJAHCLMBIO__CTOR_OFFSET))(this);
	}
};

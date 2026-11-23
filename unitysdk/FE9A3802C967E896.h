#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FE9A3802C967E896__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE9A3802C967E896_TypeDefinitionIndex = 7042;

class FE9A3802C967E896 : public ::E379DE61A548837D
{
public:
	::System::UInt32 BD31EC76A2D5F908; // 0x38
	::System::UInt32 B289D9A1F114D305; // 0x3C
	::System::UInt32 A99E76D2AC84CA08; // 0x40
	::System::UInt32 AB62713ED9E5EFA3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE9A3802C967E896__CTOR_OFFSET))(this);
	}
};

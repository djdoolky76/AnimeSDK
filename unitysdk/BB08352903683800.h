#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

#define BB08352903683800__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BB08352903683800_TypeDefinitionIndex = 463;

class BB08352903683800 : public ::E379DE61A548837D
{
public:
	::System::Boolean F9172E3A0BA093C2; // 0x38
	::System::Byte _padding0[0x3];
	::ABC::Config::GUID B1E6422003773C9F; // 0x3C
	::System::UInt32 BD31EC76A2D5F908; // 0x4C
	::System::Single A1CD57EA4DC58D98; // 0x50
	::System::Single A7001D229E7D1556; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB08352903683800__CTOR_OFFSET))(this);
	}
};

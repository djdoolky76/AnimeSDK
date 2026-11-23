#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F34413BD5FC0CD26.h"

class F12AFBF5F87777F2;

#define E6567B906443DCA4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6567B906443DCA4_TypeDefinitionIndex = 7576;

class E6567B906443DCA4 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::F34413BD5FC0CD26 F1C806D30DE38627; // 0x38
	::System::Byte _padding0[0x4];
	::F12AFBF5F87777F2* B32C52C0A2AD5245; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6567B906443DCA4__CTOR_OFFSET))(this);
	}
};

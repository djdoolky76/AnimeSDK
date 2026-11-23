#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B93BF4C197ADC1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B93BF4C197ADC1D2_TypeDefinitionIndex = 406;

class B93BF4C197ADC1D2 : public ::E379DE61A548837D
{
public:
	::System::UInt32 F8C264FCB92CC8B2; // 0x38
	::System::Boolean A04A64697797FE1C; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B93BF4C197ADC1D2__CTOR_OFFSET))(this);
	}
};

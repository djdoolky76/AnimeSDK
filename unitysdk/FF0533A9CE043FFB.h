#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B276CD4A9BE1F7AE.h"

#define FF0533A9CE043FFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF0533A9CE043FFB_TypeDefinitionIndex = 1491;

class FF0533A9CE043FFB : public ::E379DE61A548837D
{
public:
	::System::UInt32 E4260174B7F154D6; // 0x38
	::E68AA4EB51923C98::B276CD4A9BE1F7AE E8BC248B0A0523F7; // 0x3C
	::System::UInt64 F612230AADCB175E; // 0x40
	::System::Int32 B9E54374FA429FF1; // 0x48
	::System::UInt32 E0AA7DFDA1447EC1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF0533A9CE043FFB__CTOR_OFFSET))(this);
	}
};

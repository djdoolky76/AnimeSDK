#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define ABCF94D7DC8C4AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4830)

inline static constexpr unsigned int ABCF94D7DC8C4AF6_TypeDefinitionIndex = 1795;

class ABCF94D7DC8C4AF6 : public ::E379DE61A548837D
{
public:
	::System::Single A09BDFB58F03FB5D; // 0x38
	::System::Single A24A2C45D4FCDF80; // 0x3C
	::System::Single E77BF9BA421CE9CC; // 0x40
	::System::Single B17B9B9C54637FC1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCF94D7DC8C4AF6__CTOR_OFFSET))(this);
	}
};

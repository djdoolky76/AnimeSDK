#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/E379DE61A548837D.h"

#define B97B074793E03475__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B97B074793E03475_TypeDefinitionIndex = 8144;

class B97B074793E03475 : public ::E379DE61A548837D
{
public:
	::ABC::Config::WwiseBank A6CF9174741B54C0; // 0x38
	::System::Boolean EBFB0EC782251F12; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B97B074793E03475__CTOR_OFFSET))(this);
	}
};

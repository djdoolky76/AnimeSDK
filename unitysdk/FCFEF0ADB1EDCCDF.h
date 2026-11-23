#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/E379DE61A548837D.h"

#define FCFEF0ADB1EDCCDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCFEF0ADB1EDCCDF_TypeDefinitionIndex = 8210;

class FCFEF0ADB1EDCCDF : public ::E379DE61A548837D
{
public:
	::ABC::Config::WwiseBank A6CF9174741B54C0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFEF0ADB1EDCCDF__CTOR_OFFSET))(this);
	}
};

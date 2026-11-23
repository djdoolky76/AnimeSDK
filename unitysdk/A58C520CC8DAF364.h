#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/E379DE61A548837D.h"

#define A58C520CC8DAF364__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A58C520CC8DAF364_TypeDefinitionIndex = 10079;

class A58C520CC8DAF364 : public ::E379DE61A548837D
{
public:
	::System::UInt64 E97A804AAC41654A; // 0x38
	::System::UInt64 F1795B35773A25E1; // 0x40
	::E12F55A5FCCCF1EC E0BBE450BE649778; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A58C520CC8DAF364__CTOR_OFFSET))(this);
	}
};

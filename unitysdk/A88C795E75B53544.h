#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F03A8034BC66D438.h"

class F172BBC1D9745CA3;

#define A88C795E75B53544__CTOR_OFFSET UNITYSDK_OFFSET(0x1677AC0)

inline static constexpr unsigned int A88C795E75B53544_TypeDefinitionIndex = 7271;

class A88C795E75B53544 : public ::E379DE61A548837D
{
public:
	::System::Boolean A16C8ED92C989C9B; // 0x38
	::System::Byte _padding0[0x3];
	::E68AA4EB51923C98::F03A8034BC66D438 AFD19A49F6EF7793; // 0x3C
	::F172BBC1D9745CA3* B24FE13D5BF77B1F; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A88C795E75B53544__CTOR_OFFSET))(this);
	}
};

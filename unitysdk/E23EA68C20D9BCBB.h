#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E23EA68C20D9BCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB090)

inline static constexpr unsigned int E23EA68C20D9BCBB_TypeDefinitionIndex = 1466;

class E23EA68C20D9BCBB : public ::E379DE61A548837D
{
public:
	::System::Boolean BF3EB79766079C84; // 0x38
	::System::Boolean FD6454662C8DF783; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E23EA68C20D9BCBB__CTOR_OFFSET))(this);
	}
};

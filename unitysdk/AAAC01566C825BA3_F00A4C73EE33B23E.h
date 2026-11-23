#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define AAAC01566C825BA3_F00A4C73EE33B23E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAAC01566C825BA3_F00A4C73EE33B23E_TypeDefinitionIndex = 189;

class AAAC01566C825BA3_F00A4C73EE33B23E : public ::E379DE61A548837D
{
public:
	::System::Boolean B6A54A5807557991; // 0x38
	::System::Byte _padding0[0x7];
	::AB642D1382756991* E927034E06260979; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAC01566C825BA3_F00A4C73EE33B23E__CTOR_OFFSET))(this);
	}
};

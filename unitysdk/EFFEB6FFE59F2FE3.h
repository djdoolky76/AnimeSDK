#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BE35941FBE77DEA3.h"

#define EFFEB6FFE59F2FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EFFEB6FFE59F2FE3_TypeDefinitionIndex = 9805;

class EFFEB6FFE59F2FE3 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::BE35941FBE77DEA3 F3DB2AE4824461EC; // 0x38
	::System::Byte _padding0[0x4];
	::E12F55A5FCCCF1EC A35E61455FB5F910; // 0x40
	::System::Boolean BCA611733BAC07E9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFEB6FFE59F2FE3__CTOR_OFFSET))(this);
	}
};

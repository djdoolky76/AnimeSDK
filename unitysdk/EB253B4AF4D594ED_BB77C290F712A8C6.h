#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EB253B4AF4D594ED_A3B8420DA47A5391.h"
#include "unitysdk/System/Object.h"

#define EB253B4AF4D594ED_BB77C290F712A8C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB253B4AF4D594ED_BB77C290F712A8C6_TypeDefinitionIndex = 5348;

class EB253B4AF4D594ED_BB77C290F712A8C6 : public ::System::Object
{
public:
	::EB253B4AF4D594ED_A3B8420DA47A5391 EC0E55AE25E064F3; // 0x10
	::System::Byte _padding0[0x4];
	::E865F6F8B8B44C1E B4545B6509D8B53B; // 0x18
	::E2DE926113CB084F B3CD471DB0C3CB93; // 0x20
	::System::UInt64 A211D069C8A848C9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB253B4AF4D594ED_BB77C290F712A8C6__CTOR_OFFSET))(this);
	}
};

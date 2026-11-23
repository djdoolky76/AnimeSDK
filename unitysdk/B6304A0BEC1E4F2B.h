#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADD5B52CC71298E.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/ValueType.h"

#define B6304A0BEC1E4F2B_ED0572B89A5EEDD9_OFFSET UNITYSDK_OFFSET(0x176BD80)

inline static constexpr unsigned int B6304A0BEC1E4F2B_TypeDefinitionIndex = 838;

struct alignas(4) B6304A0BEC1E4F2B
{
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::Byte _padding0[0x4];
	::AADD5B52CC71298E F70652F79AF57C2B; // 0x18
	::AD61077CFCBEFAEA EAF5832E2EE694CD; // 0x90
	::E865F6F8B8B44C1E FCF8E5D943E39D33; // 0x98

	::System::Void ED0572B89A5EEDD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6304A0BEC1E4F2B_ED0572B89A5EEDD9_OFFSET))(this);
	}
};

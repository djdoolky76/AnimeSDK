#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/A6E622D86E71410F.h"

#define EF128CC85622A24B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EF128CC85622A24B_TypeDefinitionIndex = 6925;

class EF128CC85622A24B : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::A6E622D86E71410F A15A995819972770; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF128CC85622A24B__CTOR_OFFSET))(this);
	}
};

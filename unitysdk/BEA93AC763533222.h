#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BDC8B159A19ACF96.h"

#define BEA93AC763533222__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BEA93AC763533222_TypeDefinitionIndex = 2298;

class BEA93AC763533222 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::BDC8B159A19ACF96 E98DD54304BCCC21; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEA93AC763533222__CTOR_OFFSET))(this);
	}
};

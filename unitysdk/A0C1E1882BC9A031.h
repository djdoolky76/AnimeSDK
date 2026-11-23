#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class B7978779840CF3BF;

#define A0C1E1882BC9A031__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A0C1E1882BC9A031_TypeDefinitionIndex = 1144;

class A0C1E1882BC9A031 : public ::E379DE61A548837D
{
public:
	::B7978779840CF3BF* BE1CDCD4C417322B; // 0x38
	::AB642D1382756991* A6DA4B9F587D24B1; // 0x40
	::System::Boolean A5772D1F039C30DD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0C1E1882BC9A031__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA7A949AD6016B6B_ABD8AC273385EE0C.h"
#include "unitysdk/System/Object.h"

class A4B8A0A2231B996A;
class AB642D1382756991;

#define AA7A949AD6016B6B_B3FDE62B6EF1CB61__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA7A949AD6016B6B_B3FDE62B6EF1CB61_TypeDefinitionIndex = 1128;

class AA7A949AD6016B6B_B3FDE62B6EF1CB61 : public ::System::Object
{
public:
	::AA7A949AD6016B6B_ABD8AC273385EE0C A8CD59771ADED47B; // 0x10
	::System::Byte _padding0[0x4];
	::A4B8A0A2231B996A* BC14AA2CAD5C3D77; // 0x18
	::AB642D1382756991* F24F89B03931F93E; // 0x20
	::System::Single A125CF4758668442; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA7A949AD6016B6B_B3FDE62B6EF1CB61__CTOR_OFFSET))(this);
	}
};

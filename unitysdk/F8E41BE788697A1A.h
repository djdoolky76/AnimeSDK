#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F8E41BE788697A1A_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3845610)
#define F8E41BE788697A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x3845830)

inline static constexpr unsigned int F8E41BE788697A1A_TypeDefinitionIndex = 18006;

class F8E41BE788697A1A : public ::System::Object
{
public:
	::System::Single A2EB383BF42F53A7; // 0x10
	::System::Single E6AFD0FE75BCD327; // 0x14
	::System::Int32 E3289E3749FCE8EB; // 0x18
	::System::Int32 F34951A001895D7A; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8E41BE788697A1A__CTOR_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::F8E41BE788697A1A* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F8E41BE788697A1A*))((::PBYTE)hIl2Cpp + F8E41BE788697A1A_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};

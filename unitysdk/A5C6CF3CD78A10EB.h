#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A5C6CF3CD78A10EB_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x3DF7F20)
#define A5C6CF3CD78A10EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5C6CF3CD78A10EB_TypeDefinitionIndex = 14668;

class A5C6CF3CD78A10EB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5C6CF3CD78A10EB__CTOR_OFFSET))(this);
	}

	static ::A5C6CF3CD78A10EB* BD9CD726F874B523()
	{
		return ((::A5C6CF3CD78A10EB*(*)())((::PBYTE)hIl2Cpp + A5C6CF3CD78A10EB_BD9CD726F874B523_OFFSET))();
	}
};

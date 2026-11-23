#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E33D2B4077DE805D.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace ABC::Entity { class CommonData; }
namespace System { class String; }

#define B9225F5C7F0417C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8490)

inline static constexpr unsigned int B9225F5C7F0417C5_TypeDefinitionIndex = 1971;

class B9225F5C7F0417C5 : public ::System::Object
{
public:
	::E68AA4EB51923C98::E33D2B4077DE805D AA6AE7C7837B4AEC; // 0x10
	::System::Byte _padding0[0x4];
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x18
	::System::String* BC9C5D0F1F1D3BF7; // 0x20
	::ABC::Entity::CommonData* E574EEC75D5B4A63; // 0x28
	::ABC::Entity::CommonData* FC9CFDA828E9BC29; // 0x30
	::System::Boolean A545167E7745CDD2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9225F5C7F0417C5__CTOR_OFFSET))(this);
	}
};

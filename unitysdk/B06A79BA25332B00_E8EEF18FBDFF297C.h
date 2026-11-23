#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E32A18129DAA733A;
namespace System { class String; }

#define B06A79BA25332B00_E8EEF18FBDFF297C_EA05B1C36E1219D4_OFFSET UNITYSDK_OFFSET(0x243D2C0)
#define B06A79BA25332B00_E8EEF18FBDFF297C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B06A79BA25332B00_E8EEF18FBDFF297C_TypeDefinitionIndex = 4293;

class B06A79BA25332B00_E8EEF18FBDFF297C : public ::System::Object
{
public:
	::System::String* FAD42489E3D44982; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B06A79BA25332B00_E8EEF18FBDFF297C__CTOR_OFFSET))(this);
	}

	::E32A18129DAA733A* EA05B1C36E1219D4()
	{
		return ((::E32A18129DAA733A*(*)(::PVOID))((::PBYTE)hIl2Cpp + B06A79BA25332B00_E8EEF18FBDFF297C_EA05B1C36E1219D4_OFFSET))(this);
	}
};

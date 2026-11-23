#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FF5B5FAB541DCAD4__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC9A0)

inline static constexpr unsigned int FF5B5FAB541DCAD4_TypeDefinitionIndex = 914;

class FF5B5FAB541DCAD4 : public ::BD3A9F619D176EFE
{
public:
	::System::Single F0A12B25C915AC38; // 0x18
	::System::Single AF6FF353E3975BF4; // 0x1C
	::System::Single F07EA1223F9A771C; // 0x20
	::System::Single FA8F1AE6DF09CCF8; // 0x24
	::UnityEngine::Vector2 E1799A694A4EA6DC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF5B5FAB541DCAD4__CTOR_OFFSET))(this);
	}
};

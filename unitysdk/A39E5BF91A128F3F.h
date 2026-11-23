#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4A2E7A888FD3D2F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define A39E5BF91A128F3F_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x26D0A70)
#define A39E5BF91A128F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x26D0AF0)

inline static constexpr unsigned int A39E5BF91A128F3F_TypeDefinitionIndex = 6589;

struct alignas(8) A39E5BF91A128F3F
{
	::E68AA4EB51923C98::E4A2E7A888FD3D2F ACCB5B504DCA22E0; // 0x10
	::System::Byte _padding0[0x4];
	::System::Type* F9104FC74780008E; // 0x18

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A39E5BF91A128F3F_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void _ctor(::E68AA4EB51923C98::E4A2E7A888FD3D2F B8C3707952613F7A, ::System::Type* F21C1B4E5A520A3B)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::E4A2E7A888FD3D2F, ::System::Type*))((::PBYTE)hIl2Cpp + A39E5BF91A128F3F__CTOR_OFFSET))(this, B8C3707952613F7A, F21C1B4E5A520A3B);
	}
};

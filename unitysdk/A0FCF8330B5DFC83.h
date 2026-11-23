#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5D9B2730D543D46/B00C3CCDA8C38FA8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace F5D9B2730D543D46 { class AD49453349AFE166; }

#define A0FCF8330B5DFC83_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x401FD80)

inline static constexpr unsigned int A0FCF8330B5DFC83_TypeDefinitionIndex = 14570;

struct alignas(8) A0FCF8330B5DFC83
{
	::UnityEngine::Vector2 E665AC262E2D05A8; // 0x10
	::System::Int32 FAB4B56EC211CCC9; // 0x18
	::F5D9B2730D543D46::B00C3CCDA8C38FA8 F9261A714244A89F; // 0x1C
	::System::Single FC532FA534A45AAC; // 0x20
	::System::Byte _padding0[0x4];
	::F5D9B2730D543D46::AD49453349AFE166* E7336521BA8945EE; // 0x28

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0FCF8330B5DFC83_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};

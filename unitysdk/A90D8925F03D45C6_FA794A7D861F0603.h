#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define A90D8925F03D45C6_FA794A7D861F0603_F6C84D51585FF096_OFFSET UNITYSDK_OFFSET(0x1D71950)
#define A90D8925F03D45C6_FA794A7D861F0603__CTOR_OFFSET UNITYSDK_OFFSET(0x1D71B60)

inline static constexpr unsigned int A90D8925F03D45C6_FA794A7D861F0603_TypeDefinitionIndex = 9335;

class A90D8925F03D45C6_FA794A7D861F0603 : public ::A916C3A9658A83A2
{
public:
	::System::UInt32 E971E24AD73D201C; // 0x48
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0x50
	::UnityEngine::UI::Image* E527EF691914404A; // 0x58
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + A90D8925F03D45C6_FA794A7D861F0603__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void F6C84D51585FF096(::System::UInt32 BC8A36DD3606E794, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + A90D8925F03D45C6_FA794A7D861F0603_F6C84D51585FF096_OFFSET))(this, BC8A36DD3606E794, EFE497ABF6BF98D8);
	}
};

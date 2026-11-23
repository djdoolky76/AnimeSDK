#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define F2E52F6B25790519_BC627BFA937AF175_OFFSET UNITYSDK_OFFSET(0x1A046F0)
#define F2E52F6B25790519_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1A047A0)
#define F2E52F6B25790519_FECE71F1B7558D4A_OFFSET UNITYSDK_OFFSET(0x1A04590)
#define F2E52F6B25790519__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04A20)

inline static constexpr unsigned int F2E52F6B25790519_TypeDefinitionIndex = 1805;

class F2E52F6B25790519 : public ::A916C3A9658A83A2
{
public:
	::UnityEngine::UI::Image* A73C147A0BECDC7B; // 0x48
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0x50
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0x58
	::ABC::UI::MonoLocalizedTmp* E045404F879520D3; // 0x60
	::ABC::UI::MonoLocalizedTmp* E81BACE74E4725C6; // 0x68
	::ABC::UI::MonoLocalizedTmp* A94FDFA3ACBE3398; // 0x70
	::UnityEngine::RectTransform* E6668A2526BB487E; // 0x78

	::System::Void EC3033C0485522FB(::System::UInt32 BC8A36DD3606E794, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F2E52F6B25790519_EC3033C0485522FB_OFFSET))(this, BC8A36DD3606E794, EFE497ABF6BF98D8);
	}

	::System::Void BC627BFA937AF175(::UnityEngine::Vector2 BFDC0BA71944D9AA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + F2E52F6B25790519_BC627BFA937AF175_OFFSET))(this, BFDC0BA71944D9AA);
	}

	::System::Void FECE71F1B7558D4A(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F2E52F6B25790519_FECE71F1B7558D4A_OFFSET))(this, BC8A36DD3606E794);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + F2E52F6B25790519__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}
};

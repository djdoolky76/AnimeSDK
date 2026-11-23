#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B501F039F458858A.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define A51B544FDAF39690_B09E35DE5AFC798A_OFFSET UNITYSDK_OFFSET(0x1BFB580)
#define A51B544FDAF39690_BC627BFA937AF175_OFFSET UNITYSDK_OFFSET(0x1BFB780)
#define A51B544FDAF39690_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1BFB6D0)
#define A51B544FDAF39690__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB830)

inline static constexpr unsigned int A51B544FDAF39690_TypeDefinitionIndex = 317;

class A51B544FDAF39690 : public ::B501F039F458858A
{
public:
	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A51B544FDAF39690_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + A51B544FDAF39690__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void BC627BFA937AF175(::UnityEngine::Vector2 BFDC0BA71944D9AA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + A51B544FDAF39690_BC627BFA937AF175_OFFSET))(this, BFDC0BA71944D9AA);
	}

	::System::Void B09E35DE5AFC798A(::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + A51B544FDAF39690_B09E35DE5AFC798A_OFFSET))(this, F9E6A5ABE3F78299);
	}
};

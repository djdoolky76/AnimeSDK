#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B611DB0AB1B594D1.h"
#include "unitysdk/System/Object.h"

class A562B26E18EFF98F;
namespace UnityEngine { class GameObject; }

#define A1D0AD9E2B3E19D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1D0AD9E2B3E19D9_TypeDefinitionIndex = 20439;

class A1D0AD9E2B3E19D9 : public ::System::Object
{
public:
	::A562B26E18EFF98F* B29880F033C1F232; // 0x10
	::UnityEngine::GameObject* AD0CAFBAFB8B01EA; // 0x18
	::B611DB0AB1B594D1 A288CB28FC2A6DA3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1D0AD9E2B3E19D9__CTOR_OFFSET))(this);
	}
};

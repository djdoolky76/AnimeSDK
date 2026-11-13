#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGPDFFMFBN;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class Transform; }

#define ECGPDFFMFBN___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D6D50)
#define ECGPDFFMFBN___C__DISPLAYCLASS15_0___DRAWLIGHTNINGRAY_B__0_OFFSET UNITYSDK_OFFSET(0x1C3D6DA0)

inline static constexpr unsigned int ECGPDFFMFBN___c__DisplayClass15_0_TypeDefinitionIndex = 80630;

	class ECGPDFFMFBN___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::ECGPDFFMFBN* __4__this; // 0x10
		::UnityEngine::Transform* nextFrameTransform; // 0x18
		::RPG::Client::MonoEffect* effectInstance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Void __DrawLightningRay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN___C__DISPLAYCLASS15_0___DRAWLIGHTNINGRAY_B__0_OFFSET))(this);
		}

	};

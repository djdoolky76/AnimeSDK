#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define RPG_CUSTOMRP_RPGBLOOMRENDERER_PYRAMID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D6D0)

namespace RPG::CustomRP
{
	class RPGBloomRenderer_Pyramid : public ::System::Object
	{
	public:
		::UnityEngine::Rect rect; // 0x10
		::RPG::CustomRP::RTIDHandle rtA; // 0x20
		::RPG::CustomRP::RTIDHandle rtB; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_PYRAMID_CTOR_OFFSET))(this);
		}

	};
}

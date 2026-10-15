#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_IMPORT3DTEXTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC33F50)

namespace RPG::CustomRP
{
	class Import3DTexture : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_IMPORT3DTEXTURE_CTOR_OFFSET))(this);
		}

	};
}

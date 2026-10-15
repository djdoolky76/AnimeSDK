#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoBlendShapeParamBase.h"

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEMOUTHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCDE4D10)

namespace RPG::Client
{
	class EmoBlendShapesConfig_BlendShapeMouthParam : public ::RPG::Client::EmoBlendShapeParamBase
	{
	public:
		::System::Single value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPEMOUTHPARAM_CTOR_OFFSET))(this);
		}

	};
}

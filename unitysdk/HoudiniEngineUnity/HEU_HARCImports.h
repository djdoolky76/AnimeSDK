#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_HARCIMPORTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9043E0)

namespace HoudiniEngineUnity
{
	class HEU_HARCImports : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HARCIMPORTS_CTOR_OFFSET))(this);
		}

	};
}

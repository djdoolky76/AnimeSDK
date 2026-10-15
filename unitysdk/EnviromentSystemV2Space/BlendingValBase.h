#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x15634650)

namespace EnviromentSystemV2Space
{
	class BlendingValBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE_CTOR_OFFSET))(this);
		}

	};
}

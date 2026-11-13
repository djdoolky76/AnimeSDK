#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x136AF120)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BlendingValBase_TypeDefinitionIndex = 50396;

	class BlendingValBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE_CTOR_OFFSET))(this);
		}

	};
}

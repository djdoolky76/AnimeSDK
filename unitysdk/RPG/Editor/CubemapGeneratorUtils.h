#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_EDITOR_CUBEMAPGENERATORUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x182650F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int CubemapGeneratorUtils_TypeDefinitionIndex = 53120;

	class CubemapGeneratorUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_CUBEMAPGENERATORUTILS_CTOR_OFFSET))(this);
		}

	};
}

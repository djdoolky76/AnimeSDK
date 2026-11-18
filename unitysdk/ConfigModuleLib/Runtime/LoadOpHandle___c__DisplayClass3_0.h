#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class LoadOpHandle_CompositeState; }

#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E9EC0)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpHandle___c__DisplayClass3_0_TypeDefinitionIndex = 8374;

	class LoadOpHandle___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::LoadOpHandle_CompositeState* state; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS31_0__ADDCOMPLETECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1DB01980)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01970)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpHandle___c__DisplayClass31_0_TypeDefinitionIndex = 8375;

	class LoadOpHandle___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* callback; // 0x10
		::ConfigModuleLib::Runtime::LoadOpHandle self; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddCompleteCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS31_0__ADDCOMPLETECALLBACK_B__0_OFFSET))(this);
		}
	};
}

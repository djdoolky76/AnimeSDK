#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace ConfigModuleLib::Runtime { class PreloadOp; }

#define CONFIGMODULELIB_RUNTIME_PRELOADOP___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E9ED0)
#define CONFIGMODULELIB_RUNTIME_PRELOADOP___C__DISPLAYCLASS21_0__DRIVELOADOP_B__0_OFFSET UNITYSDK_OFFSET(0x1F3E9EE0)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int PreloadOp___c__DisplayClass21_0_TypeDefinitionIndex = 8496;

	class PreloadOp___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::PreloadOp* __4__this; // 0x10
		::ConfigModuleLib::Runtime::LoadOp* op; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _DriveLoadOp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_PRELOADOP___C__DISPLAYCLASS21_0__DRIVELOADOP_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F39C360)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_1___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1F39C370)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpHandle___c__DisplayClass3_1_TypeDefinitionIndex = 8376;

	template <typename T>
	class LoadOpHandle___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::LoadOp* op; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE___C__DISPLAYCLASS3_1___CTOR_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class PreloadOp; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE___C__DISPLAYCLASS11_0__CREATEPRELOADOP_B__0_OFFSET UNITYSDK_OFFSET(0x1F3E9E70)
#define CONFIGMODULELIB_RUNTIME_CONFIGMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E9E60)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigModule___c__DisplayClass11_0_TypeDefinitionIndex = 7997;

	class ConfigModule___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::PreloadOp* op; // 0x10
		::System::Func_2<::ConfigModuleLib::Runtime::PreloadOp*, ::System::Boolean>* onResolved; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreatePreloadOp_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_CONFIGMODULE___C__DISPLAYCLASS11_0__CREATEPRELOADOP_B__0_OFFSET))(this);
		}
	};
}

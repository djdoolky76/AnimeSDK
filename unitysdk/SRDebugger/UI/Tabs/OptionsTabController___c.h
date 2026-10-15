#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger { class OptionDefinition; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED6F400)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6F440)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CREATECATEGORY_B__51_0_OFFSET UNITYSDK_OFFSET(0x1ED6F450)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController___c_TypeDefinitionIndex = 37992;

	class OptionsTabController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SRDebugger.UI.Tabs", "<>c")->GetStaticField(0xAA0);
		}

		static ::System::Func_2<::SRDebugger::OptionDefinition*, ::System::Int32>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::SRDebugger::OptionDefinition*, ::System::Int32>**)UnitySDK::FromName("SRDebugger.UI.Tabs", "<>c")->GetStaticField(0xAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateCategory_b__51_0(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__CREATECATEGORY_B__51_0_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::UI::Other { class SRTab; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED64D30)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED64D70)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__SORTTABS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1ED64D80)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTabController___c_TypeDefinitionIndex = 38013;

	class SRTabController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::SRDebugger::UI::Other::SRTab*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::SRDebugger::UI::Other::SRTab*>**)UnitySDK::FromName("SRDebugger.UI.Other", "<>c")->GetStaticField(0x3CA40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SRDebugger.UI.Other", "<>c")->GetStaticField(0x3CA48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortTabs_b__21_0(::SRDebugger::UI::Other::SRTab* a1, ::SRDebugger::UI::Other::SRTab* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::UI::Other::SRTab*, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__SORTTABS_B__21_0_OFFSET))(this, a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class KBKLMAHKJAE;
namespace RPG::Client { class TabView; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DBC8570)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC89D0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x1DBC8610)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl_TypeDefinitionIndex = 75586;

	class TabViewSampleReactiveControl
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}

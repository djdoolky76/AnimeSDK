#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class KBKLMAHKJAE;
namespace RPG::Client { class TabView; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xE4111B0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE411610)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE411250)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl_TypeDefinitionIndex = 73464;

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

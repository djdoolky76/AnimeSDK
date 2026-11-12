#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20918D50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20918D90)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x20918DA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_1_OFFSET UNITYSDK_OFFSET(0x20918DB0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase___c_TypeDefinitionIndex = 40412;

	class PointerUIBase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__76_1()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x4AFE0);
		}

		static ::System::Action** StaticGet___9__76_0()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x4AFE8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x4AFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__76_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_0_OFFSET))(this);
		}

		::System::Void __ctor_b__76_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_1_OFFSET))(this);
		}

	};
}

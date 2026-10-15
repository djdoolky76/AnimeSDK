#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F65D170)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F65D1B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F65D1C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard___c_TypeDefinitionIndex = 39502;

	class ExternalKeyboard___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x52910);
		}

		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x52918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__22_0(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD___C___CTOR_B__22_0_OFFSET))(this, a1, a2);
		}

	};
}

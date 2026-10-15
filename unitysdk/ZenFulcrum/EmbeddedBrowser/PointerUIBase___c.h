#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F669590)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6695D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x1F6695E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE___C___CTOR_B__76_1_OFFSET UNITYSDK_OFFSET(0x1F6695F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase___c_TypeDefinitionIndex = 39483;

	class PointerUIBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x46DC0);
		}

		static ::System::Action** StaticGet___9__76_0()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x46DC8);
		}

		static ::System::Action** StaticGet___9__76_1()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "<>c")->GetStaticField(0x46DD0);
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

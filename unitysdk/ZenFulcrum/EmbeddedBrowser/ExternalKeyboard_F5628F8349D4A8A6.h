#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6_F8E0228F7217A6A2_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x440EB90)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard_F5628F8349D4A8A6_TypeDefinitionIndex = 19443;

	class ExternalKeyboard_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ExternalKeyboard_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>** StaticGet_E176852753E7ADDB()
		{
			return (::System::Action_2<::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ExternalKeyboard_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F8E0228F7217A6A2(::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67, ::System::Boolean A0C4A90F09BE5F01)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_F5628F8349D4A8A6_F8E0228F7217A6A2_OFFSET))(this, F4DFD92A32442E67, A0C4A90F09BE5F01);
		}
	};
}

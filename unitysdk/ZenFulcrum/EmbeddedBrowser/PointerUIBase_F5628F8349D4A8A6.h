#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6_B6377D8ACD691CB7_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6_E4B0BE0FD8C19A22_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x440EC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase_F5628F8349D4A8A6_TypeDefinitionIndex = 19449;

	class PointerUIBase_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::PointerUIBase_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ZenFulcrum::EmbeddedBrowser::PointerUIBase_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_AE030C9A6B148218()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_F6352BC50493A394()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PointerUIBase_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E4B0BE0FD8C19A22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6_E4B0BE0FD8C19A22_OFFSET))(this);
		}

		::System::Void B6377D8ACD691CB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_F5628F8349D4A8A6_B6377D8ACD691CB7_OFFSET))(this);
		}
	};
}

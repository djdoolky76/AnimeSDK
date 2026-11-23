#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoButton; }
namespace System { template <typename T> class Action_1; }

#define ABC_UI_MONOUIVIEW_F5628F8349D4A8A6_A14B301EAE418FE6_OFFSET UNITYSDK_OFFSET(0x21E3CE0)
#define ABC_UI_MONOUIVIEW_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21E4690)
#define ABC_UI_MONOUIVIEW_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIView_F5628F8349D4A8A6_TypeDefinitionIndex = 8922;

	class MonoUIView_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::UI::MonoUIView_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::UI::MonoUIView_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MonoUIView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::ABC::UI::MonoButton*>** StaticGet_F6459B7CA2224D03()
		{
			return (::System::Action_1<::ABC::UI::MonoButton*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A14B301EAE418FE6(::ABC::UI::MonoButton* A59E604D1E9B8ED2)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoButton*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIVIEW_F5628F8349D4A8A6_A14B301EAE418FE6_OFFSET))(this, A59E604D1E9B8ED2);
		}
	};
}

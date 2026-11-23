#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class CollectViewItem; }
namespace System { template <typename T> class Action_1; }

#define ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6_FD147F1BF8F62C1D_OFFSET UNITYSDK_OFFSET(0x1F95700)
#define ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95880)
#define ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAutoView_F5628F8349D4A8A6_TypeDefinitionIndex = 7926;

	class MonoUIAutoView_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::UI::MonoUIAutoView_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::UI::MonoUIAutoView_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAutoView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::ABC::UI::CollectViewItem*>** StaticGet_E7075C39E6B63936()
		{
			return (::System::Action_1<::ABC::UI::CollectViewItem*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAutoView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FD147F1BF8F62C1D(::ABC::UI::CollectViewItem* EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::CollectViewItem*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_F5628F8349D4A8A6_FD147F1BF8F62C1D_OFFSET))(this, EC35F88C87A83BEB);
		}
	};
}

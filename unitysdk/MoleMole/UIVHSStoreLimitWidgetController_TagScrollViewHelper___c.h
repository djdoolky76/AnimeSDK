#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVHSStoreTagWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1136B020)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1136B060)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__REFRESHTAGLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1136B070)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLimitWidgetController_TagScrollViewHelper___c_TypeDefinitionIndex = 49844;

	class UIVHSStoreLimitWidgetController_TagScrollViewHelper___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreLimitWidgetController_TagScrollViewHelper___c_TypeDefinitionIndex)->GetStaticField(0x3F430);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreLimitWidgetController_TagScrollViewHelper___c_TypeDefinitionIndex)->GetStaticField(0x3F438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshTagList_b__4_0(::MoleMole::UIVHSStoreTagWidgetController_Data* template_, ::MoleMole::UIVHSStoreTagWidgetController_Data* otherTemplate)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIVHSStoreTagWidgetController_Data*, ::MoleMole::UIVHSStoreTagWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_TAGSCROLLVIEWHELPER___C__REFRESHTAGLIST_B__4_0_OFFSET))(this, template_, otherTemplate);
		}
	};
}

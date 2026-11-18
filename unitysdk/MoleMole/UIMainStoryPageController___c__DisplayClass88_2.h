#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDPNKBKHMKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19046ED0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__0_OFFSET UNITYSDK_OFFSET(0x19046EE0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__1_OFFSET UNITYSDK_OFFSET(0x19047280)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass88_2_TypeDefinitionIndex = 60175;

	template <typename T1, typename T2>
	class UIMainStoryPageController___c__DisplayClass88_2 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::Int32, ::CDPNKBKHMKK>* __9__1; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x18
		::System::Object* CS___8__locals2; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* archivePerforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__CTOR_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__0_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__1(::System::Int32 index, ::System::Int32 _, ::CDPNKBKHMKK __)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::CDPNKBKHMKK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__1_OFFSET))(this, index, _, __);
		}
	};
}

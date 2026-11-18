#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1709BBD0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x1709BBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_1_TypeDefinitionIndex = 77563;

	template <typename T>
	class UIUrbanMapNavigationPageController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _markSinkToBottom; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnSkipFadeInAnimation_b__3(::System::Int32 a)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET))(this, a);
		}
	};
}

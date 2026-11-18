#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176185E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS63_1__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x176185F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass63_1_TypeDefinitionIndex = 55406;

	template <typename T>
	class UIMainCityChatPlayWidgetController___c__DisplayClass63_1 : public ::System::Object
	{
	public:
		::System::String* showSettingKey; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS63_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS63_1__PLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}

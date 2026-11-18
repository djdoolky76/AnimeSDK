#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D8900)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D8850)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D8910)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D89E0)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D8A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBottomWidgetController_SFilterKeyText_TypeDefinitionIndex = 82896;

	struct alignas(8) UIRABInLevelBottomWidgetController_SFilterKeyText
	{
		::System::Int32 IntKey; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Text; // 0x18
		::System::String* IconPath; // 0x20

		/*
		::System::Boolean Equals(::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER_SFILTERKEYTEXT___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

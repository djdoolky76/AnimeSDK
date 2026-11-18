#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVSEASONRESULTLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170D8FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultListRowWidgetController_Context_TypeDefinitionIndex = 71007;

	class UIZenkovSeasonResultListRowWidgetController_Context : public ::System::Object
	{
	public:
		::System::String* BuildingName; // 0x10
		::Foundation::AssetPath IconPath; // 0x18
		::System::Int32 MaxLevel; // 0x28
		::System::Int32 CurrentLevel; // 0x2C
		::System::Boolean IsLocked; // 0x30
		::System::Boolean UseTalentFormat; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

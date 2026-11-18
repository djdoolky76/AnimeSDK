#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1671BB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionLeftTabWidgetController_Data_TypeDefinitionIndex = 66432;

	class UIZenkovMissionLeftTabWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* UnlockDungeonList; // 0x10
		::System::Action_1<::System::Int32>* AfterSelectMapAction; // 0x18
		::System::String* MapTexture; // 0x20
		::System::String* MapName; // 0x28
		::System::Int32 MapId; // 0x30
		::System::Int32 LockTipsId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CUSTOMMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x187CF820)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_CustomMissionData_TypeDefinitionIndex = 71581;

	class UIHollowResultPageController_CustomMissionData : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::System::String* NumText; // 0x18
		::UnityEngine::Color TextColor; // 0x20
		::System::Boolean IsComplete; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Color NumTextColor; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CUSTOMMISSIONDATA__CTOR_OFFSET))(this);
		}
	};
}

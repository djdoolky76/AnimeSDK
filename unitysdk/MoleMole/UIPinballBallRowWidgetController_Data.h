#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPINBALLBALLROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED6B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBallRowWidgetController_Data_TypeDefinitionIndex = 76900;

	class UIPinballBallRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 LevelID; // 0x10
		::System::Int32 BallID; // 0x14
		::System::Boolean CanSelect; // 0x18
		::System::Boolean IsIllustrationBook; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

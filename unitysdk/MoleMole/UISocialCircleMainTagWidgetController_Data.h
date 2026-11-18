#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKGCHDENMOA;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18262560)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainTagWidgetController_Data_TypeDefinitionIndex = 55257;

	class UISocialCircleMainTagWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* OnClick; // 0x10
		::MKGCHDENMOA* templateExt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

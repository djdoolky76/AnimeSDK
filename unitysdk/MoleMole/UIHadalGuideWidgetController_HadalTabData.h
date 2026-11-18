#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F1E210)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalGuideWidgetController_HadalTabData_TypeDefinitionIndex = 56931;

	class UIHadalGuideWidgetController_HadalTabData : public ::System::Object
	{
	public:
		::CJIEIHEDMME* ActivityData; // 0x10
		::System::Action_1<::CJIEIHEDMME*>* ClickCallback; // 0x18
		::JGGGPPLICEA PlayType; // 0x20
		::DJPBMMDAFKB ActivityType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET))(this);
		}
	};
}

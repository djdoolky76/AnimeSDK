#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/RealtimeQTETaskEntryBase.h"
#include "unitysdk/MoleMole/ButtonQTETaskInputType.h"
#include "unitysdk/MoleMole/RealtimeQTEButtonUIWidgetType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BUTTONQTETASKENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1652BD30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskEntryBase_TypeDefinitionIndex = 54711;

	class ButtonQTETaskEntryBase : public ::MoleMole::Config::RealtimeQTETaskEntryBase
	{
	public:
		::MoleMole::ButtonQTETaskInputType InputType; // 0x68
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::ButtonQTETaskInputType>* AlternativeInputTypes; // 0x70
		::System::Boolean WrongInputFail; // 0x78
		::System::Byte _padding1[0x3];
		::MoleMole::RealtimeQTEButtonUIWidgetType ButtonUIWidgetType; // 0x7C
		::Foundation::AssetPath ButtonIconPath; // 0x80
		::Foundation::AssetPath ButtonIconMaterialPath; // 0x90
		::System::String* ButtonUIStyleKey; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKENTRYBASE__CTOR_OFFSET))(this);
		}
	};
}

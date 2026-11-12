#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/H5logGeneralReport_LogLevel.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class H5logGeneralReport; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E13C0)
#define MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__LOGREPORTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB5E1410)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport___c__DisplayClass4_0_TypeDefinitionIndex = 47503;

	class H5logGeneralReport___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::System::String* moduleType; // 0x18
		::System::String* message; // 0x20
		::MiHoYo::SDK::H5logGeneralReport* __4__this; // 0x28
		::MiHoYo::SDK::H5logGeneralReport_LogLevel logLevel; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _LogReportAsync_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT___C__DISPLAYCLASS4_0__LOGREPORTASYNC_B__0_OFFSET))(this, a1);
		}

	};
}

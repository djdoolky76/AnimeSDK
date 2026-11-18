#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F42A9B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_1__GETHOSTRESOLVEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1F42A9C0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface___c__DisplayClass12_1_TypeDefinitionIndex = 35716;

	template <typename T>
	class MiHoYoMTRInterface___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 nTaskID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _GetHostResolveInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_1__GETHOSTRESOLVEINFO_B__0_OFFSET))(this);
		}
	};
}

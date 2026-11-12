#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/Object.h"
class DLGOFLDEIOF;
class GNPPNJNBKAI;
class ODGPPIHLOFF;

#define GNPPNJNBKAI___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16AA6F70)
#define GNPPNJNBKAI___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x16AA6F80)
#define GNPPNJNBKAI___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x16AA7B30)

inline static constexpr unsigned int GNPPNJNBKAI___c__DisplayClass2_0_TypeDefinitionIndex = 50532;

	class GNPPNJNBKAI___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::DLGOFLDEIOF* lerpTask; // 0x10
		::GNPPNJNBKAI* __4__this; // 0x18
		::ODGPPIHLOFF* handle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPNJNBKAI___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePropertyAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPNJNBKAI___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET))(this);
		}

		::System::Void _UpdatePropertyAsync_b__1(::EnviromentSystemV2Space::CancelFadingReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + GNPPNJNBKAI___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET))(this, a1);
		}

	};

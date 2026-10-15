#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAELMBLOLIM;
namespace System { class Action; }

#define CAELMBLOLIM___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC47A180)
#define CAELMBLOLIM___C__DISPLAYCLASS68_0__OPENSCREENTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xC47A4A0)
#define CAELMBLOLIM___C__DISPLAYCLASS68_0__OPENSCREENTRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xC47A5D0)

inline static constexpr unsigned int CAELMBLOLIM___c__DisplayClass68_0_TypeDefinitionIndex = 60562;

	class CAELMBLOLIM___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::CAELMBLOLIM* __4__this; // 0x10
		::System::Action* onReady; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Void _OpenScreenTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C__DISPLAYCLASS68_0__OPENSCREENTRANSFER_B__0_OFFSET))(this);
		}

		::System::Void _OpenScreenTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C__DISPLAYCLASS68_0__OPENSCREENTRANSFER_B__1_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEFOGNGCMH;

#define CFEFOGNGCMH___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA09BA0)
#define CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xCA0A5A0)
#define CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_B__2_OFFSET UNITYSDK_OFFSET(0xCA0A620)
#define CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_G__BEGINRESTARTACTION_0_OFFSET UNITYSDK_OFFSET(0xCA09BB0)

inline static constexpr unsigned int CFEFOGNGCMH___c__DisplayClass54_0_TypeDefinitionIndex = 81866;

	class CFEFOGNGCMH___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::CFEFOGNGCMH* __4__this; // 0x10
		::System::Boolean shouldSendRestartEndMatch; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single transferStartTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Void __BeginRestartWithScreenTransfer_g__BeginRestartAction_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_G__BEGINRESTARTACTION_0_OFFSET))(this);
		}

		::System::Void __BeginRestartWithScreenTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_B__1_OFFSET))(this);
		}

		::System::Boolean __BeginRestartWithScreenTransfer_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS54_0___BEGINRESTARTWITHSCREENTRANSFER_B__2_OFFSET))(this);
		}

	};

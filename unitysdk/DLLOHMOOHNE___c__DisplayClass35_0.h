#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
class LKKHHKCMLDN;

#define DLLOHMOOHNE___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B23C0)
#define DLLOHMOOHNE___C__DISPLAYCLASS35_0___PLAYNPCTRIGGERSOUND_B__0_OFFSET UNITYSDK_OFFSET(0xF8B2920)

	class DLLOHMOOHNE___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::LKKHHKCMLDN* info; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayNPCTriggerSound_b__0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE___C__DISPLAYCLASS35_0___PLAYNPCTRIGGERSOUND_B__0_OFFSET))(this, a1, a2, a3);
		}

	};

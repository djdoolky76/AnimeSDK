#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ECPGBDINBAB;

#define ECPGBDINBAB___C__DISPLAYCLASS77_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13307320)
#define ECPGBDINBAB___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x13308780)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass77_0_TypeDefinitionIndex = 78018;

	class ECPGBDINBAB___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::ECPGBDINBAB* __4__this; // 0x10
		::System::Boolean originStop; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single moveTimeSec; // 0x1C
		::UnityEngine::Vector3 originalLookAtPosition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS77_0_CTOR_OFFSET))(this);
		}

		::System::Void __HandleSyncDynamicBornCatMessage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS77_0___HANDLESYNCDYNAMICBORNCATMESSAGE_B__0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOHFBGJHCMB;
namespace RPG::Client { class ChallengePeak; }

#define OOHFBGJHCMB___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF802F0)
#define OOHFBGJHCMB___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET UNITYSDK_OFFSET(0xBF84320)

	class OOHFBGJHCMB___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* peak; // 0x10
		::OOHFBGJHCMB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _ChallengeNormal_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET))(this, a1);
		}

	};

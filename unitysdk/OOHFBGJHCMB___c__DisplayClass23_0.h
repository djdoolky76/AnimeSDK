#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOHFBGJHCMB;
namespace RPG::Client { class ChallengePeak; }

#define OOHFBGJHCMB___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF78C10)
#define OOHFBGJHCMB___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET UNITYSDK_OFFSET(0xBF7CC40)

inline static constexpr unsigned int OOHFBGJHCMB___c__DisplayClass23_0_TypeDefinitionIndex = 63164;

	class OOHFBGJHCMB___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::OOHFBGJHCMB* __4__this; // 0x10
		::RPG::Client::ChallengePeak* peak; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _ChallengeNormal_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET))(this, a1);
		}

	};

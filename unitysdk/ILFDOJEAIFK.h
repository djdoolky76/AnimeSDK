#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"
#include "unitysdk/System/Object.h"

#define ILFDOJEAIFK_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x164B0270)

	class ILFDOJEAIFK : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::Rtcb_BreakActionOption a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::Rtcb_BreakActionOption, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + ILFDOJEAIFK_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

	};

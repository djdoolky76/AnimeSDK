#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_PROP_BOXMANCOORD_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0xDC2C370)

namespace RPG::Client::Prop
{
	struct alignas(4) BoxmanCoord
	{
		::System::Int32 Col; // 0x10
		::System::Int32 Row; // 0x14
		/*
		static ::RPG::Client::Prop::BoxmanCoord ALJJDGONFDD(::RPG::Client::Prop::BoxmanCoord a1, ::RPG::Client::Prop::BoxmanCoord a2)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanCoord, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANCOORD_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

	};
}

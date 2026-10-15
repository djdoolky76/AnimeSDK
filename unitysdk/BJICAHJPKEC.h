#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Nullable; }

#define BJICAHJPKEC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x1AB90)

	struct alignas(8) BJICAHJPKEC
	{
		::RPG::GameCore::FixPoint PMJKDMDOEDE; // 0x10
		::System::Nullable* OAGPAEJLHEC; // 0x18
		::RPG::GameCore::FixPoint FENOMPCEFII()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJICAHJPKEC_FENOMPCEFII_OFFSET))(this);
		}

	};

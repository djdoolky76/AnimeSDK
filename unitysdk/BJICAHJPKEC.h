#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

#define BJICAHJPKEC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x1AB90)

inline static constexpr unsigned int BJICAHJPKEC_TypeDefinitionIndex = 57680;

	struct alignas(8) BJICAHJPKEC
	{
		::RPG::GameCore::FixPoint PMJKDMDOEDE; // 0x10
		::System::Nullable_1<::RPG::GameCore::FixPoint> OAGPAEJLHEC; // 0x18
		::RPG::GameCore::FixPoint FENOMPCEFII()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJICAHJPKEC_FENOMPCEFII_OFFSET))(this);
		}

	};

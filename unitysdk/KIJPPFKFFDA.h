#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchUIShowType.h"
#include "unitysdk/System/Object.h"
class GJEAIHHLECO;

#define KIJPPFKFFDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB432720)
#define KIJPPFKFFDA_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xB432690)

inline static constexpr unsigned int KIJPPFKFFDA_TypeDefinitionIndex = 81913;

	class KIJPPFKFFDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPPFKFFDA_CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingMatchUIShowType KHJNHDOJDDP(::GJEAIHHLECO* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingMatchUIShowType(*)(::PVOID, ::GJEAIHHLECO*))((::PBYTE)hIl2Cpp + KIJPPFKFFDA_KHJNHDOJDDP_OFFSET))(this, a1);
		}

	};

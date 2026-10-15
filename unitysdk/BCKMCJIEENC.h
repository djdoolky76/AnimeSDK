#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionManhattanPlacePickupItem; }

#define BCKMCJIEENC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C575710)
#define BCKMCJIEENC_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C575720)

inline static constexpr unsigned int BCKMCJIEENC_TypeDefinitionIndex = 37371;

	class BCKMCJIEENC : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*))((::PBYTE)hIl2Cpp + BCKMCJIEENC_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + BCKMCJIEENC_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};

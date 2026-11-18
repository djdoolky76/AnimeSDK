#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_ABNDAEDJCND;
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Bangkov; }

#define PGFBGFBDBAH_LMEANIBNKNK_GLEJHJCPAHC_OFFSET UNITYSDK_OFFSET(0x150C7800)
#define PGFBGFBDBAH_LMEANIBNKNK__CTOR_OFFSET UNITYSDK_OFFSET(0x150C77F0)

inline static constexpr unsigned int PGFBGFBDBAH_LMEANIBNKNK_TypeDefinitionIndex = 46104;

class PGFBGFBDBAH_LMEANIBNKNK : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapRightStreetInfoController_Bangkov* NCIMBHDKIJM; // 0x10
	::PGFBGFBDBAH_ABNDAEDJCND* KGFKHBMEKBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LMEANIBNKNK__CTOR_OFFSET))(this);
	}

	::System::Void GLEJHJCPAHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LMEANIBNKNK_GLEJHJCPAHC_OFFSET))(this);
	}
};

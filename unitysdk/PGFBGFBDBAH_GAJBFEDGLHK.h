#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_EJDFNIFFLLN;
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Collect; }

#define PGFBGFBDBAH_GAJBFEDGLHK_AMABPIPLLDA_OFFSET UNITYSDK_OFFSET(0x1A7EF620)
#define PGFBGFBDBAH_GAJBFEDGLHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EF610)

inline static constexpr unsigned int PGFBGFBDBAH_GAJBFEDGLHK_TypeDefinitionIndex = 46129;

class PGFBGFBDBAH_GAJBFEDGLHK : public ::System::Object
{
public:
	::PGFBGFBDBAH_EJDFNIFFLLN* KGFKHBMEKBL; // 0x10
	::MoleMole::UIUrbanMapRightStreetInfoController_Collect* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GAJBFEDGLHK__CTOR_OFFSET))(this);
	}

	::System::Void AMABPIPLLDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GAJBFEDGLHK_AMABPIPLLDA_OFFSET))(this);
	}
};

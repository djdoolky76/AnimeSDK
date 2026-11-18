#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define JHIBFIAMKDO_GIPPAHDFBIO_OFFSET UNITYSDK_OFFSET(0x1C361530)

inline static constexpr unsigned int JHIBFIAMKDO_TypeDefinitionIndex = 45200;

class JHIBFIAMKDO : public ::System::Object
{
public:
	static ::System::Boolean GIPPAHDFBIO(::MoleMole::HollowChessboard::HollowCell& NFBAMGPDGKC)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + JHIBFIAMKDO_GIPPAHDFBIO_OFFSET))(NFBAMGPDGKC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"

#define EPJFMMOANBL_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x158C5680)
#define EPJFMMOANBL_CGMNBICLFEI_OFFSET UNITYSDK_OFFSET(0x158C5760)

inline static constexpr unsigned int EPJFMMOANBL_TypeDefinitionIndex = 75378;

class EPJFMMOANBL : public ::System::Object
{
public:
	static ::MoleMole::NAPInput::Attitude ANPBCLAFCJB(::MoleMole::NAPInput::Attitude& EHPJNLMOPAL, ::MoleMole::NAPInput::Attitude& PAHDPPPMJIK, ::Foundation::SpaceType HMPAJDGFNLH)
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + EPJFMMOANBL_ANPBCLAFCJB_OFFSET))(EHPJNLMOPAL, PAHDPPPMJIK, HMPAJDGFNLH);
	}

	static ::MoleMole::NAPInput::Attitude CGMNBICLFEI(::MoleMole::NAPInput::Attitude& PADJNMGMGHO, ::MoleMole::NAPInput::Attitude& KDEHMPGOCEP, ::Foundation::SpaceType HMPAJDGFNLH)
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + EPJFMMOANBL_CGMNBICLFEI_OFFSET))(PADJNMGMGHO, KDEHMPGOCEP, HMPAJDGFNLH);
	}
};

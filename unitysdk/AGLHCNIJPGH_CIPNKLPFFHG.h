#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGLHCNIJPGH;
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }

#define AGLHCNIJPGH_CIPNKLPFFHG_MFFJEADMDDM_OFFSET UNITYSDK_OFFSET(0x1439E240)
#define AGLHCNIJPGH_CIPNKLPFFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1439E230)

inline static constexpr unsigned int AGLHCNIJPGH_CIPNKLPFFHG_TypeDefinitionIndex = 70868;

class AGLHCNIJPGH_CIPNKLPFFHG : public ::System::Object
{
public:
	::MoleMole::GalGame::TransitionWithActionsCfg* AMJADGKJAPK; // 0x10
	::AGLHCNIJPGH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH_CIPNKLPFFHG__CTOR_OFFSET))(this);
	}

	::System::Void MFFJEADMDDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH_CIPNKLPFFHG_MFFJEADMDDM_OFFSET))(this);
	}
};

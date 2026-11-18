#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALFAPJABJJB;
namespace MoleMole { class SwitchTeamInBattleSubSystem; }

#define ALFAPJABJJB_LJFDCMOGFIO_BOEAHDHIBBC_OFFSET UNITYSDK_OFFSET(0x144F7A50)
#define ALFAPJABJJB_LJFDCMOGFIO__CTOR_OFFSET UNITYSDK_OFFSET(0x144F7A40)

inline static constexpr unsigned int ALFAPJABJJB_LJFDCMOGFIO_TypeDefinitionIndex = 89626;

class ALFAPJABJJB_LJFDCMOGFIO : public ::System::Object
{
public:
	::MoleMole::SwitchTeamInBattleSubSystem* JNAHMECAJDC; // 0x10
	::ALFAPJABJJB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LJFDCMOGFIO__CTOR_OFFSET))(this);
	}

	::System::Void BOEAHDHIBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LJFDCMOGFIO_BOEAHDHIBBC_OFFSET))(this);
	}
};

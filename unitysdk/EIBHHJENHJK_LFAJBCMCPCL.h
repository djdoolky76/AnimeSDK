#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_LFAJBCMCPCL_AJHPOADLFPI_OFFSET UNITYSDK_OFFSET(0x1063D520)
#define EIBHHJENHJK_LFAJBCMCPCL_BOEKFLMJNOC_OFFSET UNITYSDK_OFFSET(0x1063D570)
#define EIBHHJENHJK_LFAJBCMCPCL_LELCECCNKDE_OFFSET UNITYSDK_OFFSET(0x1063DA90)
#define EIBHHJENHJK_LFAJBCMCPCL_PNMCGMJFNDI_OFFSET UNITYSDK_OFFSET(0x1063DA40)
#define EIBHHJENHJK_LFAJBCMCPCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1063D510)

inline static constexpr unsigned int EIBHHJENHJK_LFAJBCMCPCL_TypeDefinitionIndex = 71909;

class EIBHHJENHJK_LFAJBCMCPCL : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFAJBCMCPCL__CTOR_OFFSET))(this);
	}

	::System::Void AJHPOADLFPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFAJBCMCPCL_AJHPOADLFPI_OFFSET))(this);
	}

	::System::Void BOEKFLMJNOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFAJBCMCPCL_BOEKFLMJNOC_OFFSET))(this);
	}

	::System::Void PNMCGMJFNDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFAJBCMCPCL_PNMCGMJFNDI_OFFSET))(this);
	}

	::System::Void LELCECCNKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LFAJBCMCPCL_LELCECCNKDE_OFFSET))(this);
	}
};

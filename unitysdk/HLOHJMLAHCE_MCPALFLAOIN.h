#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadSpaceList; }

#define HLOHJMLAHCE_MCPALFLAOIN_BBCKIHNNJOP_OFFSET UNITYSDK_OFFSET(0x1011ED90)
#define HLOHJMLAHCE_MCPALFLAOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1011ED80)

inline static constexpr unsigned int HLOHJMLAHCE_MCPALFLAOIN_TypeDefinitionIndex = 82523;

class HLOHJMLAHCE_MCPALFLAOIN : public ::System::Object
{
public:
	::MoleMole::MonoGamepadSpaceList* KILPCOMOCMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_MCPALFLAOIN__CTOR_OFFSET))(this);
	}

	::System::Void BBCKIHNNJOP(::System::Boolean FEKJMJOPFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_MCPALFLAOIN_BBCKIHNNJOP_OFFSET))(this, FEKJMJOPFJC);
	}
};

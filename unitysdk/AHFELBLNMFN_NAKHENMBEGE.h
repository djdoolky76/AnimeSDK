#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }

#define AHFELBLNMFN_NAKHENMBEGE_EFBLEPMAPDH_OFFSET UNITYSDK_OFFSET(0x134CB8B0)
#define AHFELBLNMFN_NAKHENMBEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x134CB8A0)

inline static constexpr unsigned int AHFELBLNMFN_NAKHENMBEGE_TypeDefinitionIndex = 67277;

class AHFELBLNMFN_NAKHENMBEGE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFELBLNMFN_NAKHENMBEGE__CTOR_OFFSET))(this);
	}

	::System::Void EFBLEPMAPDH(::MoleMole::ConfigHollowChessboardEntityBehavior* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigHollowChessboardEntityBehavior*))((::PBYTE)hIl2Cpp + AHFELBLNMFN_NAKHENMBEGE_EFBLEPMAPDH_OFFSET))(this, DFMKILICPFB);
	}
};

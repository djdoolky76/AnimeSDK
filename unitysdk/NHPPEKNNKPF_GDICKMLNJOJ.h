#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define NHPPEKNNKPF_GDICKMLNJOJ_NHBCLGGJCPB_OFFSET UNITYSDK_OFFSET(0x11F78C60)
#define NHPPEKNNKPF_GDICKMLNJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F78C50)

inline static constexpr unsigned int NHPPEKNNKPF_GDICKMLNJOJ_TypeDefinitionIndex = 74432;

class NHPPEKNNKPF_GDICKMLNJOJ : public ::System::Object
{
public:
	::MGHNAPKHBOG HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_GDICKMLNJOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean NHBCLGGJCPB(::MoleMole::TurnBattleEntityUnit* JCPNDFAEOLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_GDICKMLNJOJ_NHBCLGGJCPB_OFFSET))(this, JCPNDFAEOLI);
	}
};

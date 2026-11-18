#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHPPEKNNKPF;
namespace MoleMole { class TurnBattleEntityUnit; }

#define NHPPEKNNKPF_BAAIAGAMICD_LLAHLNBJAGB_OFFSET UNITYSDK_OFFSET(0x12C60E90)
#define NHPPEKNNKPF_BAAIAGAMICD_PGIIOMLPFHN_OFFSET UNITYSDK_OFFSET(0x12C61130)
#define NHPPEKNNKPF_BAAIAGAMICD_PNDDLOOMDGJ_OFFSET UNITYSDK_OFFSET(0x12C60FC0)
#define NHPPEKNNKPF_BAAIAGAMICD__CTOR_OFFSET UNITYSDK_OFFSET(0x12C60E80)

inline static constexpr unsigned int NHPPEKNNKPF_BAAIAGAMICD_TypeDefinitionIndex = 74434;

class NHPPEKNNKPF_BAAIAGAMICD : public ::System::Object
{
public:
	::NHPPEKNNKPF* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BAAIAGAMICD__CTOR_OFFSET))(this);
	}

	::System::Boolean LLAHLNBJAGB(::MoleMole::TurnBattleEntityUnit* HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BAAIAGAMICD_LLAHLNBJAGB_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Boolean PNDDLOOMDGJ(::MoleMole::TurnBattleEntityUnit* JCPNDFAEOLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BAAIAGAMICD_PNDDLOOMDGJ_OFFSET))(this, JCPNDFAEOLI);
	}

	::System::Int32 PGIIOMLPFHN(::MoleMole::TurnBattleEntityUnit* EJCBEJMGFAJ, ::MoleMole::TurnBattleEntityUnit* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BAAIAGAMICD_PGIIOMLPFHN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

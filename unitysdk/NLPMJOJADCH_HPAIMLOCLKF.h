#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace System { class Action; }

#define NLPMJOJADCH_HPAIMLOCLKF_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0xFD075D0)
#define NLPMJOJADCH_HPAIMLOCLKF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD075C0)

inline static constexpr unsigned int NLPMJOJADCH_HPAIMLOCLKF_TypeDefinitionIndex = 78037;

class NLPMJOJADCH_HPAIMLOCLKF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPMJOJADCH_HPAIMLOCLKF__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::SummerEventShootingGamePlayConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*))((::PBYTE)hIl2Cpp + NLPMJOJADCH_HPAIMLOCLKF_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};

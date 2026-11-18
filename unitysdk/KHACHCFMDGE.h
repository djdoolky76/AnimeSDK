#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }

#define KHACHCFMDGE_DCMMLLBBMDM_OFFSET UNITYSDK_OFFSET(0x14FD7870)
#define KHACHCFMDGE_JPCLJINBJBM_OFFSET UNITYSDK_OFFSET(0x14FD76B0)

inline static constexpr unsigned int KHACHCFMDGE_TypeDefinitionIndex = 57763;

class KHACHCFMDGE : public ::System::Object
{
public:
	static ::System::Void JPCLJINBJBM(::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 DDNJJNELHMN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + KHACHCFMDGE_JPCLJINBJBM_OFFSET))(HPADNAEINPK, DDNJJNELHMN);
	}

	static ::System::Void DCMMLLBBMDM(::MoleMole::EntityHandle HPADNAEINPK, ::MoleMole::MonsterSpecialIdleEntry* BKBGCANGFOI)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::MonsterSpecialIdleEntry*))((::PBYTE)hIl2Cpp + KHACHCFMDGE_DCMMLLBBMDM_OFFSET))(HPADNAEINPK, BKBGCANGFOI);
	}
};

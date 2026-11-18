#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace System { class Action; }

#define GDPJANILHJC_NCIFCNIHDOE_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x11D9DF20)
#define GDPJANILHJC_NCIFCNIHDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9DF10)

inline static constexpr unsigned int GDPJANILHJC_NCIFCNIHDOE_TypeDefinitionIndex = 47441;

class GDPJANILHJC_NCIFCNIHDOE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPJANILHJC_NCIFCNIHDOE__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::MonsterSpecialIdleConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterSpecialIdleConfig*))((::PBYTE)hIl2Cpp + GDPJANILHJC_NCIFCNIHDOE_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};

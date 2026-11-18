#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace System { class Action; }

#define FDJHAKJKKJE_MKMPMPIMAJN_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x11ACB180)
#define FDJHAKJKKJE_MKMPMPIMAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x11ACB080)

inline static constexpr unsigned int FDJHAKJKKJE_MKMPMPIMAJN_TypeDefinitionIndex = 44658;

class FDJHAKJKKJE_MKMPMPIMAJN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_MKMPMPIMAJN__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::MonsterMappingConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterMappingConfig*))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_MKMPMPIMAJN_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};

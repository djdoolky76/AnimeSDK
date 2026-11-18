#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelAddOnConfig; }
namespace System { class Action; }

#define MEEMMPKAFKL_FAAJIMHOJJP_PIPEPBGLGFN_OFFSET UNITYSDK_OFFSET(0x151C2CC0)
#define MEEMMPKAFKL_FAAJIMHOJJP__CTOR_OFFSET UNITYSDK_OFFSET(0x151C2CB0)

inline static constexpr unsigned int MEEMMPKAFKL_FAAJIMHOJJP_TypeDefinitionIndex = 63987;

class MEEMMPKAFKL_FAAJIMHOJJP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FAAJIMHOJJP__CTOR_OFFSET))(this);
	}

	::System::Void PIPEPBGLGFN(::MoleMole::Config::LevelAddOnConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelAddOnConfig*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FAAJIMHOJJP_PIPEPBGLGFN_OFFSET))(this, DFMKILICPFB);
	}
};

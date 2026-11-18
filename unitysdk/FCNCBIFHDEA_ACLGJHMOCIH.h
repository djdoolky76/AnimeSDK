#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { class Action; }

#define FCNCBIFHDEA_ACLGJHMOCIH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xBB38150)
#define FCNCBIFHDEA_ACLGJHMOCIH__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38140)

inline static constexpr unsigned int FCNCBIFHDEA_ACLGJHMOCIH_TypeDefinitionIndex = 90391;

class FCNCBIFHDEA_ACLGJHMOCIH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_ACLGJHMOCIH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSpecialEffectHitData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitData*))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_ACLGJHMOCIH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

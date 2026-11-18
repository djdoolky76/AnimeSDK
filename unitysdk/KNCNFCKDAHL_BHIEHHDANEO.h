#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }

#define KNCNFCKDAHL_BHIEHHDANEO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1772B220)
#define KNCNFCKDAHL_BHIEHHDANEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1772B210)

inline static constexpr unsigned int KNCNFCKDAHL_BHIEHHDANEO_TypeDefinitionIndex = 49173;

class KNCNFCKDAHL_BHIEHHDANEO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_BHIEHHDANEO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigShootingGroundScriptableObject* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundScriptableObject*))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_BHIEHHDANEO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

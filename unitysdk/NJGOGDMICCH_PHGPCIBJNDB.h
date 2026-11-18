#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJGOGDMICCH_DIGHKIALHDM;
namespace MoleMole::Config { class ConfigGamepadRumble; }
namespace System { template <typename T> class Action_1; }

#define NJGOGDMICCH_PHGPCIBJNDB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16B82430)
#define NJGOGDMICCH_PHGPCIBJNDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B82420)

inline static constexpr unsigned int NJGOGDMICCH_PHGPCIBJNDB_TypeDefinitionIndex = 55582;

class NJGOGDMICCH_PHGPCIBJNDB : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigGamepadRumble*>* AMHGBGMOMLL; // 0x10
	::NJGOGDMICCH_DIGHKIALHDM* FGBNBFHOKAA; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGOGDMICCH_PHGPCIBJNDB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGamepadRumble* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadRumble*))((::PBYTE)hIl2Cpp + NJGOGDMICCH_PHGPCIBJNDB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

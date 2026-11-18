#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigStealthMonster; }
namespace System { class Action; }

#define NHPGDHPGGPL_BDBOJPAAABE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12FEAF60)
#define NHPGDHPGGPL_BDBOJPAAABE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEAF50)

inline static constexpr unsigned int NHPGDHPGGPL_BDBOJPAAABE_TypeDefinitionIndex = 57611;

class NHPGDHPGGPL_BDBOJPAAABE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_BDBOJPAAABE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigStealthMonster* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigStealthMonster*))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_BDBOJPAAABE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPinball; }
namespace System { class Action; }

#define BBMPNNCEKEP_ELFDCGKNHDL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12D18180)
#define BBMPNNCEKEP_ELFDCGKNHDL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D18170)

inline static constexpr unsigned int BBMPNNCEKEP_ELFDCGKNHDL_TypeDefinitionIndex = 79585;

class BBMPNNCEKEP_ELFDCGKNHDL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_ELFDCGKNHDL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigPinball* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigPinball*))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_ELFDCGKNHDL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

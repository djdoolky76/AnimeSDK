#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class Action; }

#define DOHOLMPNLDD_PCINDFEBAEI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x134728E0)
#define DOHOLMPNLDD_PCINDFEBAEI__CTOR_OFFSET UNITYSDK_OFFSET(0x134728D0)

inline static constexpr unsigned int DOHOLMPNLDD_PCINDFEBAEI_TypeDefinitionIndex = 49609;

class DOHOLMPNLDD_PCINDFEBAEI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOLMPNLDD_PCINDFEBAEI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIPortrait* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*))((::PBYTE)hIl2Cpp + DOHOLMPNLDD_PCINDFEBAEI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

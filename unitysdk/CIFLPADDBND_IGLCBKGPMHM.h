#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace System { class Action; }

#define CIFLPADDBND_IGLCBKGPMHM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16958EC0)
#define CIFLPADDBND_IGLCBKGPMHM__CTOR_OFFSET UNITYSDK_OFFSET(0x16958EB0)

inline static constexpr unsigned int CIFLPADDBND_IGLCBKGPMHM_TypeDefinitionIndex = 87916;

class CIFLPADDBND_IGLCBKGPMHM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFLPADDBND_IGLCBKGPMHM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSummerTideTreasure* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSummerTideTreasure*))((::PBYTE)hIl2Cpp + CIFLPADDBND_IGLCBKGPMHM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

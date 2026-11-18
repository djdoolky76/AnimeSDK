#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace System { class Action; }

#define NGLLLPIMOLB_HPIBKPHFJFA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13756BB0)
#define NGLLLPIMOLB_HPIBKPHFJFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13756BA0)

inline static constexpr unsigned int NGLLLPIMOLB_HPIBKPHFJFA_TypeDefinitionIndex = 50825;

class NGLLLPIMOLB_HPIBKPHFJFA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_HPIBKPHFJFA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIGachaPortrait* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_HPIBKPHFJFA_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

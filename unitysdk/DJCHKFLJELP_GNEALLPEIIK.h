#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class Action; }

#define DJCHKFLJELP_GNEALLPEIIK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x149B0040)
#define DJCHKFLJELP_GNEALLPEIIK__CTOR_OFFSET UNITYSDK_OFFSET(0x149B0030)

inline static constexpr unsigned int DJCHKFLJELP_GNEALLPEIIK_TypeDefinitionIndex = 77577;

class DJCHKFLJELP_GNEALLPEIIK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCHKFLJELP_GNEALLPEIIK__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigZipLine* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine*))((::PBYTE)hIl2Cpp + DJCHKFLJELP_GNEALLPEIIK_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

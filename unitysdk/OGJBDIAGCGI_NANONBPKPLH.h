#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }

#define OGJBDIAGCGI_NANONBPKPLH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11B2AA70)
#define OGJBDIAGCGI_NANONBPKPLH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2AA60)

inline static constexpr unsigned int OGJBDIAGCGI_NANONBPKPLH_TypeDefinitionIndex = 65656;

class OGJBDIAGCGI_NANONBPKPLH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_NANONBPKPLH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigCharacterAimMode* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAimMode*))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_NANONBPKPLH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

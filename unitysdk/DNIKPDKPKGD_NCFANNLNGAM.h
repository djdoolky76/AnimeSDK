#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class Action; }

#define DNIKPDKPKGD_NCFANNLNGAM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x19D7E4C0)
#define DNIKPDKPKGD_NCFANNLNGAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7E4B0)

inline static constexpr unsigned int DNIKPDKPKGD_NCFANNLNGAM_TypeDefinitionIndex = 39906;

class DNIKPDKPKGD_NCFANNLNGAM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_NCFANNLNGAM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigIndicatedLights* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_NCFANNLNGAM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace System { class Action; }

#define DKNHLLDALCE_CNPDLDOAGJN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x18349430)
#define DKNHLLDALCE_CNPDLDOAGJN__CTOR_OFFSET UNITYSDK_OFFSET(0x18349420)

inline static constexpr unsigned int DKNHLLDALCE_CNPDLDOAGJN_TypeDefinitionIndex = 64680;

class DKNHLLDALCE_CNPDLDOAGJN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHLLDALCE_CNPDLDOAGJN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGhostEffects* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*))((::PBYTE)hIl2Cpp + DKNHLLDALCE_CNPDLDOAGJN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

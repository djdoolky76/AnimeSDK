#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class Action; }

#define EFGJHIPLCHG_CLHNFELJNEP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x17106E40)
#define EFGJHIPLCHG_CLHNFELJNEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17106E30)

inline static constexpr unsigned int EFGJHIPLCHG_CLHNFELJNEP_TypeDefinitionIndex = 73543;

class EFGJHIPLCHG_CLHNFELJNEP : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_CLHNFELJNEP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_CLHNFELJNEP_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }

#define CJLMINKIDLK_GHIPLCNGKBG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15339530)
#define CJLMINKIDLK_GHIPLCNGKBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15339520)

inline static constexpr unsigned int CJLMINKIDLK_GHIPLCNGKBG_TypeDefinitionIndex = 79040;

class CJLMINKIDLK_GHIPLCNGKBG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLMINKIDLK_GHIPLCNGKBG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSceneSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSceneSound*))((::PBYTE)hIl2Cpp + CJLMINKIDLK_GHIPLCNGKBG_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

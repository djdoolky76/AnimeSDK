#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }

#define EBALAGJMDGK_JIHOJGOKONM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1062ADD0)
#define EBALAGJMDGK_JIHOJGOKONM__CTOR_OFFSET UNITYSDK_OFFSET(0x1062ADC0)

inline static constexpr unsigned int EBALAGJMDGK_JIHOJGOKONM_TypeDefinitionIndex = 42898;

class EBALAGJMDGK_JIHOJGOKONM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBALAGJMDGK_JIHOJGOKONM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::LevelShootGameConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*))((::PBYTE)hIl2Cpp + EBALAGJMDGK_JIHOJGOKONM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

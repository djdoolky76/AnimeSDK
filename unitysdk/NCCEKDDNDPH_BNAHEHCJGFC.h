#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }

#define NCCEKDDNDPH_BNAHEHCJGFC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x105ABC30)
#define NCCEKDDNDPH_BNAHEHCJGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x105ABC20)

inline static constexpr unsigned int NCCEKDDNDPH_BNAHEHCJGFC_TypeDefinitionIndex = 64111;

class NCCEKDDNDPH_BNAHEHCJGFC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_BNAHEHCJGFC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::CommonDitherConfigs* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CommonDitherConfigs*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_BNAHEHCJGFC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

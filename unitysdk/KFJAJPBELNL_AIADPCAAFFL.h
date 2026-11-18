#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }

#define KFJAJPBELNL_AIADPCAAFFL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1860E780)
#define KFJAJPBELNL_AIADPCAAFFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1860E770)

inline static constexpr unsigned int KFJAJPBELNL_AIADPCAAFFL_TypeDefinitionIndex = 66250;

class KFJAJPBELNL_AIADPCAAFFL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJAJPBELNL_AIADPCAAFFL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigExQTE* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigExQTE*))((::PBYTE)hIl2Cpp + KFJAJPBELNL_AIADPCAAFFL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

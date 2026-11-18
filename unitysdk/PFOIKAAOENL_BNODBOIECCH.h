#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }
namespace System { class Action; }

#define PFOIKAAOENL_BNODBOIECCH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x11B63FF0)
#define PFOIKAAOENL_BNODBOIECCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B63FE0)

inline static constexpr unsigned int PFOIKAAOENL_BNODBOIECCH_TypeDefinitionIndex = 68943;

class PFOIKAAOENL_BNODBOIECCH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOIKAAOENL_BNODBOIECCH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGachaPerformance* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformance*))((::PBYTE)hIl2Cpp + PFOIKAAOENL_BNODBOIECCH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

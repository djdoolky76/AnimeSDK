#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { class Action; }

#define IDMIMLFPPMN_MMKBLELOMJC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xEBB81C0)
#define IDMIMLFPPMN_MMKBLELOMJC__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB81B0)

inline static constexpr unsigned int IDMIMLFPPMN_MMKBLELOMJC_TypeDefinitionIndex = 42817;

class IDMIMLFPPMN_MMKBLELOMJC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_MMKBLELOMJC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::FootPrintConfigs* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_MMKBLELOMJC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

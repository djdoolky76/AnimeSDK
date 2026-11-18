#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace System { class Action; }

#define MKEKHOCOGDG_HDBBFOLNLIH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12FF8E40)
#define MKEKHOCOGDG_HDBBFOLNLIH__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF8E30)

inline static constexpr unsigned int MKEKHOCOGDG_HDBBFOLNLIH_TypeDefinitionIndex = 84055;

class MKEKHOCOGDG_HDBBFOLNLIH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_HDBBFOLNLIH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigTempleLevelUp* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_HDBBFOLNLIH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

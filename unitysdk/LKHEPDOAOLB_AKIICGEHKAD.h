#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }

#define LKHEPDOAOLB_AKIICGEHKAD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1519CE60)
#define LKHEPDOAOLB_AKIICGEHKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1519CE50)

inline static constexpr unsigned int LKHEPDOAOLB_AKIICGEHKAD_TypeDefinitionIndex = 43351;

class LKHEPDOAOLB_AKIICGEHKAD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_AKIICGEHKAD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigVentCrawl* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_AKIICGEHKAD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

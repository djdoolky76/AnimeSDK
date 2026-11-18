#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace System { class Action; }

#define KLGFCMHHEPO_POOMLOLNHJM_ELEEDAAFBGC_OFFSET UNITYSDK_OFFSET(0x18636390)
#define KLGFCMHHEPO_POOMLOLNHJM__CTOR_OFFSET UNITYSDK_OFFSET(0x18636380)

inline static constexpr unsigned int KLGFCMHHEPO_POOMLOLNHJM_TypeDefinitionIndex = 90758;

class KLGFCMHHEPO_POOMLOLNHJM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_POOMLOLNHJM__CTOR_OFFSET))(this);
	}

	::System::Void ELEEDAAFBGC(::MoleMole::Config::ConfigPlayerAccessory* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessory*))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_POOMLOLNHJM_ELEEDAAFBGC_OFFSET))(this, DFMKILICPFB);
	}
};

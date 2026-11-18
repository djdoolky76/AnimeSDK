#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }

#define BPAFFMMJJCJ_ALBALLELCPL_NABNDMPNKCI_OFFSET UNITYSDK_OFFSET(0x1509D210)
#define BPAFFMMJJCJ_ALBALLELCPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1509D080)

inline static constexpr unsigned int BPAFFMMJJCJ_ALBALLELCPL_TypeDefinitionIndex = 53775;

class BPAFFMMJJCJ_ALBALLELCPL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_ALBALLELCPL__CTOR_OFFSET))(this);
	}

	::System::Void NABNDMPNKCI(::MoleMole::Config::ConfigAudioBasePath* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_ALBALLELCPL_NABNDMPNKCI_OFFSET))(this, DFMKILICPFB);
	}
};

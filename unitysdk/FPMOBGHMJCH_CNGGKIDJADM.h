#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }

#define FPMOBGHMJCH_CNGGKIDJADM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x116C7C50)
#define FPMOBGHMJCH_CNGGKIDJADM__CTOR_OFFSET UNITYSDK_OFFSET(0x116C7C40)

inline static constexpr unsigned int FPMOBGHMJCH_CNGGKIDJADM_TypeDefinitionIndex = 62128;

class FPMOBGHMJCH_CNGGKIDJADM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOBGHMJCH_CNGGKIDJADM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigFixedCameraEntry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFixedCameraEntry*))((::PBYTE)hIl2Cpp + FPMOBGHMJCH_CNGGKIDJADM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

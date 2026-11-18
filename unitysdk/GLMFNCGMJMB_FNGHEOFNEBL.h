#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }

#define GLMFNCGMJMB_FNGHEOFNEBL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14CFB400)
#define GLMFNCGMJMB_FNGHEOFNEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFB3F0)

inline static constexpr unsigned int GLMFNCGMJMB_FNGHEOFNEBL_TypeDefinitionIndex = 74089;

class GLMFNCGMJMB_FNGHEOFNEBL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_FNGHEOFNEBL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGroupVideo* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGroupVideo*))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_FNGHEOFNEBL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

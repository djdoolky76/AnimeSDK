#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachments; }
namespace System { class Action; }

#define IMJOODAEMOF_AHIJABHFJLC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x141F9B20)
#define IMJOODAEMOF_AHIJABHFJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x141F9B10)

inline static constexpr unsigned int IMJOODAEMOF_AHIJABHFJLC_TypeDefinitionIndex = 75272;

class IMJOODAEMOF_AHIJABHFJLC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJOODAEMOF_AHIJABHFJLC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAttachments* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachments*))((::PBYTE)hIl2Cpp + IMJOODAEMOF_AHIJABHFJLC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

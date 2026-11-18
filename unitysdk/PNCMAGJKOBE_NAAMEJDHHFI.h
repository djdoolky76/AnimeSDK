#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace System { class Action; }
namespace System { class String; }

#define PNCMAGJKOBE_NAAMEJDHHFI_PEGNELIFOBK_OFFSET UNITYSDK_OFFSET(0x1D9D5B90)
#define PNCMAGJKOBE_NAAMEJDHHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5B80)

inline static constexpr unsigned int PNCMAGJKOBE_NAAMEJDHHFI_TypeDefinitionIndex = 42324;

class PNCMAGJKOBE_NAAMEJDHHFI : public ::System::Object
{
public:
	::System::String* OIIHCACKLHD; // 0x10
	::System::Action* IBNICCGMILF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NAAMEJDHHFI__CTOR_OFFSET))(this);
	}

	::System::Void PEGNELIFOBK(::MoleMole::Config::ConfigCommonEntityAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NAAMEJDHHFI_PEGNELIFOBK_OFFSET))(this, DFMKILICPFB);
	}
};

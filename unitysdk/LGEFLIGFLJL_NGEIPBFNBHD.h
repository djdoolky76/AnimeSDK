#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace System { class Action; }

#define LGEFLIGFLJL_NGEIPBFNBHD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x184F3730)
#define LGEFLIGFLJL_NGEIPBFNBHD__CTOR_OFFSET UNITYSDK_OFFSET(0x184F3720)

inline static constexpr unsigned int LGEFLIGFLJL_NGEIPBFNBHD_TypeDefinitionIndex = 62384;

class LGEFLIGFLJL_NGEIPBFNBHD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean GHOLINNCJCE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_NGEIPBFNBHD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigGalGameAvatarShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_NGEIPBFNBHD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};

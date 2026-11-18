#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class Action; }

#define CNMLHAJOAHF_HCIABPBOMPM_BKBGCIIIDAB_OFFSET UNITYSDK_OFFSET(0x193EA060)
#define CNMLHAJOAHF_HCIABPBOMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x193EA050)

inline static constexpr unsigned int CNMLHAJOAHF_HCIABPBOMPM_TypeDefinitionIndex = 82231;

class CNMLHAJOAHF_HCIABPBOMPM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_HCIABPBOMPM__CTOR_OFFSET))(this);
	}

	::System::Void BKBGCIIIDAB(::MoleMole::Config::ConfigAvatarLayoutCameraMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCameraMisc*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_HCIABPBOMPM_BKBGCIIIDAB_OFFSET))(this, DFMKILICPFB);
	}
};

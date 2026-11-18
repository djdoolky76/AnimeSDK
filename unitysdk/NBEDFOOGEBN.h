#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCKJMKBPMCC;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define NBEDFOOGEBN_BLNBLOFHFPL_OFFSET UNITYSDK_OFFSET(0x13B55C00)
#define NBEDFOOGEBN_DIDOKMFJPBI_OFFSET UNITYSDK_OFFSET(0x13B55B90)
#define NBEDFOOGEBN_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x13B55BA0)
#define NBEDFOOGEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13B55B80)

inline static constexpr unsigned int NBEDFOOGEBN_TypeDefinitionIndex = 71587;

class NBEDFOOGEBN : public ::System::Object
{
public:
	::MCKJMKBPMCC* FPPKDGDNIIC; // 0x10
	::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA; // 0x18
	::MoleMole::CustomCollisionConfigData* _APKLJAIKIJK_k__BackingField; // 0x20

	::System::Void _ctor(::MCKJMKBPMCC* LMIPOHOKCHC, ::MoleMole::CustomCollisionConfigData* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MCKJMKBPMCC*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NBEDFOOGEBN__CTOR_OFFSET))(this, LMIPOHOKCHC, DFMKILICPFB, LJBPECKCCEA);
	}

	::MoleMole::CustomCollisionConfigData* DIDOKMFJPBI()
	{
		return ((::MoleMole::CustomCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEDFOOGEBN_DIDOKMFJPBI_OFFSET))(this);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + NBEDFOOGEBN_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void BLNBLOFHFPL(::MoleMole::CustomCollisionConfigData* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CustomCollisionConfigData*))((::PBYTE)hIl2Cpp + NBEDFOOGEBN_BLNBLOFHFPL_OFFSET))(this, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
class CGMDGPBKKFD;
class FHJJGNMOELH;
namespace RPG::AvatarSystem { class IAvatar; }

#define JKMFPHNLJHD_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0xB222780)
#define JKMFPHNLJHD_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0xB2228F0)
#define JKMFPHNLJHD_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0xB2226D0)
#define JKMFPHNLJHD_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0xB222570)
#define JKMFPHNLJHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2224E0)

inline static constexpr unsigned int JKMFPHNLJHD_TypeDefinitionIndex = 62841;

	class JKMFPHNLJHD : public ::System::Object
	{
	public:
		::FHJJGNMOELH* KLFKAABPBEJ; // 0x10
		::CGMDGPBKKFD* FOMAOEGECHC; // 0x18
		::System::Void _ctor(::CGMDGPBKKFD* a1, ::FHJJGNMOELH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CGMDGPBKKFD*, ::FHJJGNMOELH*))((::PBYTE)hIl2Cpp + JKMFPHNLJHD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* ConvertToUpgrade(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + JKMFPHNLJHD_CONVERTTOUPGRADE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* ConvertToOrigin(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + JKMFPHNLJHD_CONVERTTOORIGIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckPartIsNeedUpgrade(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + JKMFPHNLJHD_CHECKPARTISNEEDUPGRADE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckTraceNodeIsUpgraded(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + JKMFPHNLJHD_CHECKTRACENODEISUPGRADED_OFFSET))(this, a1, a2);
		}

	};

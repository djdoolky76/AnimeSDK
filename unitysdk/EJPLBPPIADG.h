#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define EJPLBPPIADG_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0x154FA210)
#define EJPLBPPIADG_CTOR_OFFSET UNITYSDK_OFFSET(0x154FA790)
#define EJPLBPPIADG_DMNCFEMANLK_OFFSET UNITYSDK_OFFSET(0x154FA060)
#define EJPLBPPIADG_GKDCFFAAMBC_OFFSET UNITYSDK_OFFSET(0x154FA6E0)
#define EJPLBPPIADG_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0x154FA170)

inline static constexpr unsigned int EJPLBPPIADG_TypeDefinitionIndex = 62857;

	class EJPLBPPIADG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPLBPPIADG_CTOR_OFFSET))(this);
		}

		::System::UInt32 DMNCFEMANLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPLBPPIADG_DMNCFEMANLK_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + EJPLBPPIADG_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + EJPLBPPIADG_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

		static ::System::UInt32 GKDCFFAAMBC(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + EJPLBPPIADG_GKDCFFAAMBC_OFFSET))(a1, a2, a3);
		}

	};

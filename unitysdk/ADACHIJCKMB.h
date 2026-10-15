#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define ADACHIJCKMB_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0xB131DF0)
#define ADACHIJCKMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1321D0)
#define ADACHIJCKMB_DOEDPEGCLJN_OFFSET UNITYSDK_OFFSET(0xB131BF0)
#define ADACHIJCKMB_GKDCFFAAMBC_OFFSET UNITYSDK_OFFSET(0xB132120)
#define ADACHIJCKMB_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0xB131D00)

inline static constexpr unsigned int ADACHIJCKMB_TypeDefinitionIndex = 62858;

	class ADACHIJCKMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACHIJCKMB_CTOR_OFFSET))(this);
		}

		::System::UInt32 DOEDPEGCLJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACHIJCKMB_DOEDPEGCLJN_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + ADACHIJCKMB_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + ADACHIJCKMB_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

		static ::System::UInt32 GKDCFFAAMBC(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + ADACHIJCKMB_GKDCFFAAMBC_OFFSET))(a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class GJABEBPIGDN;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define HOOIHKNPALE_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0x15DBE000)
#define HOOIHKNPALE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBE4E0)
#define HOOIHKNPALE_IGLBGKKAJMF_OFFSET UNITYSDK_OFFSET(0x15DBE300)
#define HOOIHKNPALE_LFCBKAKLHJM_OFFSET UNITYSDK_OFFSET(0x15DBE3F0)
#define HOOIHKNPALE_MPBNBBOLFBK_OFFSET UNITYSDK_OFFSET(0x15DBE100)
#define HOOIHKNPALE_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0x15DBDF80)

	class HOOIHKNPALE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOIHKNPALE_CTOR_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HOOIHKNPALE_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HOOIHKNPALE_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

		::GJABEBPIGDN* MPBNBBOLFBK(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::GJABEBPIGDN*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HOOIHKNPALE_MPBNBBOLFBK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EquipmentItemData* IGLBGKKAJMF(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HOOIHKNPALE_IGLBGKKAJMF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EquipmentItemData* LFCBKAKLHJM(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2, ::KCLIKAPODAD* a3)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HOOIHKNPALE_LFCBKAKLHJM_OFFSET))(this, a1, a2, a3);
		}

	};

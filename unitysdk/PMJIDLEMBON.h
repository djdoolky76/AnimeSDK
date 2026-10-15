#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define PMJIDLEMBON_CTOR_OFFSET UNITYSDK_OFFSET(0xC31C1D0)
#define PMJIDLEMBON_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC31C040)
#define PMJIDLEMBON_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC31BDD0)
#define PMJIDLEMBON_JLDCFHKIMIP_OFFSET UNITYSDK_OFFSET(0xC31BE40)

inline static constexpr unsigned int PMJIDLEMBON_TypeDefinitionIndex = 65570;

	class PMJIDLEMBON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJIDLEMBON_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PMJIDLEMBON_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PMJIDLEMBON_HFIDHKKOEOA_OFFSET))(this, a1);
		}

		::System::UInt32 JLDCFHKIMIP(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + PMJIDLEMBON_JLDCFHKIMIP_OFFSET))(this, a1);
		}

	};

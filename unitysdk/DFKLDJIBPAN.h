#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }

#define DFKLDJIBPAN_CTOR_OFFSET UNITYSDK_OFFSET(0xE8314B0)
#define DFKLDJIBPAN_MOKHFPHKAMI_OFFSET UNITYSDK_OFFSET(0xE831590)
#define DFKLDJIBPAN_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0xE831C80)

inline static constexpr unsigned int DFKLDJIBPAN_TypeDefinitionIndex = 65378;

	class DFKLDJIBPAN : public ::System::Object
	{
	public:
		::RPG::Client::GridFightElationTraitEquipComponent* GFCOCDCKNLD; // 0x10
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightElationTraitEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + DFKLDJIBPAN_CTOR_OFFSET))(this, a1);
		}

		::System::Void MOKHFPHKAMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLDJIBPAN_MOKHFPHKAMI_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + DFKLDJIBPAN_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};

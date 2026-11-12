#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightElationLaughPointEquipComponent; }

#define FPOBECHAGIL_CTOR_OFFSET UNITYSDK_OFFSET(0x16855DD0)
#define FPOBECHAGIL_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x16855EA0)

inline static constexpr unsigned int FPOBECHAGIL_TypeDefinitionIndex = 67189;

	class FPOBECHAGIL : public ::System::Object
	{
	public:
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x10
		::RPG::Client::GridFightElationLaughPointEquipComponent* GFCOCDCKNLD; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightElationLaughPointEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationLaughPointEquipComponent*))((::PBYTE)hIl2Cpp + FPOBECHAGIL_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + FPOBECHAGIL_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};

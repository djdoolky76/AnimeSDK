#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }

#define DMPKDJKCHIL_CTOR_OFFSET UNITYSDK_OFFSET(0x10C3BCA0)
#define DMPKDJKCHIL_ENBIKBNMNMO_OFFSET UNITYSDK_OFFSET(0x10C3BE10)
#define DMPKDJKCHIL_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x10C3BD70)
#define DMPKDJKCHIL_PFBNDKLPNKF_OFFSET UNITYSDK_OFFSET(0x10C3C6F0)

inline static constexpr unsigned int DMPKDJKCHIL_TypeDefinitionIndex = 67192;

	class DMPKDJKCHIL : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* LBNBPMIFDHI; // 0x10
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + DMPKDJKCHIL_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + DMPKDJKCHIL_PAMKOLICNOL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint ENBIKBNMNMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPKDJKCHIL_ENBIKBNMNMO_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint PFBNDKLPNKF(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DMPKDJKCHIL_PFBNDKLPNKF_OFFSET))(a1);
		}

	};

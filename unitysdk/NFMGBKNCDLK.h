#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }

#define NFMGBKNCDLK_CTOR_OFFSET UNITYSDK_OFFSET(0x18E7CFA0)
#define NFMGBKNCDLK_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x18E7D070)

inline static constexpr unsigned int NFMGBKNCDLK_TypeDefinitionIndex = 67191;

	class NFMGBKNCDLK : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* LBNBPMIFDHI; // 0x10
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + NFMGBKNCDLK_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + NFMGBKNCDLK_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};

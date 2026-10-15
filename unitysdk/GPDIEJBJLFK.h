#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define GPDIEJBJLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B35880)
#define GPDIEJBJLFK_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0x15B35960)
#define GPDIEJBJLFK_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x15B35F80)

inline static constexpr unsigned int GPDIEJBJLFK_TypeDefinitionIndex = 65379;

	class GPDIEJBJLFK : public ::System::Object
	{
	public:
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x10
		::RPG::Client::GridFightTraitElationEffect* INKLGHHCKIK; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + GPDIEJBJLFK_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIEJBJLFK_LNEPAFGAPJH_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + GPDIEJBJLFK_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};

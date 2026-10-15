#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define GPDIEJBJLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B41290)
#define GPDIEJBJLFK_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0x15B41370)
#define GPDIEJBJLFK_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x15B41990)

	class GPDIEJBJLFK : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* INKLGHHCKIK; // 0x10
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x18
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

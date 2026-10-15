#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationEffect; }

#define EDKHIJKIPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x133257A0)
#define EDKHIJKIPLM_ENBIKBNMNMO_OFFSET UNITYSDK_OFFSET(0x13325900)
#define EDKHIJKIPLM_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0x13325880)
#define EDKHIJKIPLM_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x13326450)
#define EDKHIJKIPLM_PFBNDKLPNKF_OFFSET UNITYSDK_OFFSET(0x133261C0)

	class EDKHIJKIPLM : public ::System::Object
	{
	public:
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x10
		::RPG::Client::GridFightTraitElationEffect* INKLGHHCKIK; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + EDKHIJKIPLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKHIJKIPLM_LNEPAFGAPJH_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PFBNDKLPNKF(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + EDKHIJKIPLM_PFBNDKLPNKF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint ENBIKBNMNMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKHIJKIPLM_ENBIKBNMNMO_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + EDKHIJKIPLM_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};

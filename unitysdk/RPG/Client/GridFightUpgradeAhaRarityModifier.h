#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class GHKEBIOFDHI;
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA05910)
#define RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1CA05920)
#define RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1CA05B10)
#define RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER__SELECTLEADINGTRAIT_OFFSET UNITYSDK_OFFSET(0x1CA05980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeAhaRarityModifier_TypeDefinitionIndex = 66647;

	class GridFightUpgradeAhaRarityModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_GET_PROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_Target()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER_GET_TARGET_OFFSET))(this);
		}

		::GHKEBIOFDHI* _SelectLeadingTrait()
		{
			return ((::GHKEBIOFDHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEAHARARITYMODIFIER__SELECTLEADINGTRAIT_OFFSET))(this);
		}

	};
}

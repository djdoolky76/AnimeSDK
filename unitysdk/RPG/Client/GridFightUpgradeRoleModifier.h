#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xD2C6090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeRoleModifier_TypeDefinitionIndex = 65011;

	class GridFightUpgradeRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER_CTOR_OFFSET))(this, a1);
		}

	};
}

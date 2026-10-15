#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xD1EC6A0)

namespace RPG::Client
{
	class GridFightRecycleRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER_CTOR_OFFSET))(this, a1);
		}

	};
}

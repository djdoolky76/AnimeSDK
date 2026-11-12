#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTSNAPSHOTROLEANDADDLATERMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC802A0)
#define RPG_CLIENT_GRIDFIGHTSNAPSHOTROLEANDADDLATERMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC802B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSnapshotRoleAndAddLaterModifier_TypeDefinitionIndex = 66656;

	class GridFightSnapshotRoleAndAddLaterModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSNAPSHOTROLEANDADDLATERMODIFIER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSNAPSHOTROLEANDADDLATERMODIFIER_UPDATE_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xD1E42B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRandomEquipModifier_TypeDefinitionIndex = 65003;

	class GridFightRandomEquipModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER_CTOR_OFFSET))(this, a1);
		}

	};
}

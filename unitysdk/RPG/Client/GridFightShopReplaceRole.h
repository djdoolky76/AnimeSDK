#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15B180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopReplaceRole_TypeDefinitionIndex = 66626;

	class GridFightShopReplaceRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE_CTOR_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define BGDIAHDJLLG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB02090)
#define BGDIAHDJLLG_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB020A0)

inline static constexpr unsigned int BGDIAHDJLLG_TypeDefinitionIndex = 66620;

	class BGDIAHDJLLG : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + BGDIAHDJLLG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + BGDIAHDJLLG_UPDATE_OFFSET))(this, a1);
		}

	};

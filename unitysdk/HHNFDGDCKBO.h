#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define HHNFDGDCKBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4760)
#define HHNFDGDCKBO_UPDATE_OFFSET UNITYSDK_OFFSET(0x15CD4770)

inline static constexpr unsigned int HHNFDGDCKBO_TypeDefinitionIndex = 64998;

	class HHNFDGDCKBO : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HHNFDGDCKBO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HHNFDGDCKBO_UPDATE_OFFSET))(this, a1);
		}

	};

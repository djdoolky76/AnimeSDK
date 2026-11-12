#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define HJNEGNOILPL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C7F520)

inline static constexpr unsigned int HJNEGNOILPL_TypeDefinitionIndex = 66649;

	class HJNEGNOILPL : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HJNEGNOILPL_CTOR_OFFSET))(this, a1);
		}

	};

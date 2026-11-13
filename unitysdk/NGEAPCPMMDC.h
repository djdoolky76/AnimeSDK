#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define NGEAPCPMMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x18E87B40)

inline static constexpr unsigned int NGEAPCPMMDC_TypeDefinitionIndex = 66652;

	class NGEAPCPMMDC : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + NGEAPCPMMDC_CTOR_OFFSET))(this, a1);
		}

	};

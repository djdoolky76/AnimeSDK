#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define OGLFIIJPGNE_CTOR_OFFSET UNITYSDK_OFFSET(0xC713C90)

inline static constexpr unsigned int OGLFIIJPGNE_TypeDefinitionIndex = 66651;

	class OGLFIIJPGNE : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + OGLFIIJPGNE_CTOR_OFFSET))(this, a1);
		}

	};

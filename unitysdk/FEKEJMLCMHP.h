#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define FEKEJMLCMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x130C9A60)
#define FEKEJMLCMHP_KIABKDHANGN_OFFSET UNITYSDK_OFFSET(0x130C9A70)

inline static constexpr unsigned int FEKEJMLCMHP_TypeDefinitionIndex = 66644;

	class FEKEJMLCMHP : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + FEKEJMLCMHP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 KIABKDHANGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKEJMLCMHP_KIABKDHANGN_OFFSET))(this);
		}

	};

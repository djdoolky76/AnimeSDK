#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define EJIMJEHPKHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1641FFE0)
#define EJIMJEHPKHN_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0x1641FFF0)

inline static constexpr unsigned int EJIMJEHPKHN_TypeDefinitionIndex = 66659;

	class EJIMJEHPKHN : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EJIMJEHPKHN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIMJEHPKHN_ILFCOLOIBEM_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define EOPFFFHHEKG_CTOR_OFFSET UNITYSDK_OFFSET(0x164DFC50)
#define EOPFFFHHEKG_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0x164DFC60)

inline static constexpr unsigned int EOPFFFHHEKG_TypeDefinitionIndex = 66645;

	class EOPFFFHHEKG : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EOPFFFHHEKG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFFFHHEKG_ILFCOLOIBEM_OFFSET))(this);
		}

	};

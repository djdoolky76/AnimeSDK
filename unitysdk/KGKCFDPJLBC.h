#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define KGKCFDPJLBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3EF4A0)
#define KGKCFDPJLBC_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0xB3EF640)
#define KGKCFDPJLBC_KIABKDHANGN_OFFSET UNITYSDK_OFFSET(0xB3EF500)
#define KGKCFDPJLBC_PLGMGJFBIBF_OFFSET UNITYSDK_OFFSET(0xB3EF5A0)
#define KGKCFDPJLBC_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3EF4B0)

inline static constexpr unsigned int KGKCFDPJLBC_TypeDefinitionIndex = 65019;

	class KGKCFDPJLBC : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KGKCFDPJLBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KGKCFDPJLBC_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 KIABKDHANGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKCFDPJLBC_KIABKDHANGN_OFFSET))(this);
		}

		::System::UInt32 PLGMGJFBIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKCFDPJLBC_PLGMGJFBIBF_OFFSET))(this);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKCFDPJLBC_ILFCOLOIBEM_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define CJALJOFPNEB_CTOR_OFFSET UNITYSDK_OFFSET(0xDB692A0)
#define CJALJOFPNEB_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0xDB692B0)
#define CJALJOFPNEB_OMOMKODHLNO_OFFSET UNITYSDK_OFFSET(0xDB69350)

inline static constexpr unsigned int CJALJOFPNEB_TypeDefinitionIndex = 66634;

	class CJALJOFPNEB : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + CJALJOFPNEB_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALJOFPNEB_ILFCOLOIBEM_OFFSET))(this);
		}

		::System::UInt32 OMOMKODHLNO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALJOFPNEB_OMOMKODHLNO_OFFSET))(this);
		}

	};

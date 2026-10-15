#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define KOECBKCCIJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB58C530)
#define KOECBKCCIJF_PMPODEGJNNA_OFFSET UNITYSDK_OFFSET(0xB58C540)

inline static constexpr unsigned int KOECBKCCIJF_TypeDefinitionIndex = 65009;

	class KOECBKCCIJF : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KOECBKCCIJF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 PMPODEGJNNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOECBKCCIJF_PMPODEGJNNA_OFFSET))(this);
		}

	};

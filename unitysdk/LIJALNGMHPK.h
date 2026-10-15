#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define LIJALNGMHPK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D34D0)

inline static constexpr unsigned int LIJALNGMHPK_TypeDefinitionIndex = 67099;

	class LIJALNGMHPK : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueTournPersonaStyleInfo* AFFOKAFGBIG; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*))((::PBYTE)hIl2Cpp + LIJALNGMHPK_CTOR_OFFSET))(this, a1, a2);
		}

	};

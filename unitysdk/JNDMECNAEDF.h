#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueTournHexInfo; }

#define JNDMECNAEDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2751A0)

inline static constexpr unsigned int JNDMECNAEDF_TypeDefinitionIndex = 67084;

	class JNDMECNAEDF : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueTournHexInfo* PKAMJPDMHOA; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournHexInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournHexInfo*))((::PBYTE)hIl2Cpp + JNDMECNAEDF_CTOR_OFFSET))(this, a1, a2);
		}

	};

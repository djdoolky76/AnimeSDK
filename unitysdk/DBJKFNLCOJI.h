#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define DBJKFNLCOJI_CTOR_OFFSET UNITYSDK_OFFSET(0xE220DA0)

inline static constexpr unsigned int DBJKFNLCOJI_TypeDefinitionIndex = 67121;

	class DBJKFNLCOJI : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueTournTitanBlessInfo* DIMPJFDCPCP; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournTitanBlessInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournTitanBlessInfo*))((::PBYTE)hIl2Cpp + DBJKFNLCOJI_CTOR_OFFSET))(this, a1, a2);
		}

	};

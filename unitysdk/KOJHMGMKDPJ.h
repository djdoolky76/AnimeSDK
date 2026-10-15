#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueBuffInfo; }

#define KOJHMGMKDPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB599460)

	class KOJHMGMKDPJ : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueBuffInfo* ENICGHHFDHP; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueBuffInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + KOJHMGMKDPJ_CTOR_OFFSET))(this, a1, a2);
		}

	};

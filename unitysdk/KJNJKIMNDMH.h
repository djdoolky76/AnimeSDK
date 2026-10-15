#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueFormulaInfo; }

#define KJNJKIMNDMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB45E240)

	class KJNJKIMNDMH : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueFormulaInfo* PCCPCCCFBHJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + KJNJKIMNDMH_CTOR_OFFSET))(this, a1, a2);
		}

	};

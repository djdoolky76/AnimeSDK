#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionBattleMap; }

#define OPBLDAGPPFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFA09B0)
#define OPBLDAGPPFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA0B90)

inline static constexpr unsigned int OPBLDAGPPFB_TypeDefinitionIndex = 63866;

	class OPBLDAGPPFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBLDAGPPFB_CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleMap* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPBLDAGPPFB_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};

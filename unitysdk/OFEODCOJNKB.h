#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICCEHNCMJAN.h"
class CIICMHFLBNF;
namespace RPG::Client { class ExpeditionBattleTeam; }

#define OFEODCOJNKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F480)
#define OFEODCOJNKB_HEIJDKMBPMI_OFFSET UNITYSDK_OFFSET(0xBE3F490)

inline static constexpr unsigned int OFEODCOJNKB_TypeDefinitionIndex = 63940;

	class OFEODCOJNKB : public ::System::Object
	{
	public:
		::CIICMHFLBNF* OEOGNEPBADO; // 0x10
		::System::Void _ctor(::CIICMHFLBNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIICMHFLBNF*))((::PBYTE)hIl2Cpp + OFEODCOJNKB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeam* HEIJDKMBPMI(::ICCEHNCMJAN a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + OFEODCOJNKB_HEIJDKMBPMI_OFFSET))(this, a1);
		}

	};

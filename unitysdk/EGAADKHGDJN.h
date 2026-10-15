#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EGAADKHGDJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define EGAADKHGDJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7A4E0)
#define EGAADKHGDJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD7A4F0)
#define EGAADKHGDJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD7A4B0)

inline static constexpr unsigned int EGAADKHGDJN_TypeDefinitionIndex = 19887;

	class EGAADKHGDJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x18
		::RPG::GameCore::FateRinCardPileType KODIKGGDENE; // 0x20
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x22
		::System::UInt32 FEHABNJEENK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAADKHGDJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGAADKHGDJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAADKHGDJN*))((::PBYTE)hIl2Cpp + EGAADKHGDJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGAADKHGDJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAADKHGDJN*))((::PBYTE)hIl2Cpp + EGAADKHGDJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

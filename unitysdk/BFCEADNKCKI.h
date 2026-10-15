#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"
class BFCEADNKCKI;
class FCOEMCEDLNL;

#define BFCEADNKCKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66E770)
#define BFCEADNKCKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66E5F0)

	class BFCEADNKCKI : public ::System::Object
	{
	public:
		::System::Single FHPMEIECKLG; // 0x10
		::RPG::GameCore::BattleResultConditionType LOAGIPDPLFM; // 0x14
		::System::UInt32 DBLDCKODNEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEADNKCKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFCEADNKCKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFCEADNKCKI*))((::PBYTE)hIl2Cpp + BFCEADNKCKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

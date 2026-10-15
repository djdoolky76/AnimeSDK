#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BCNMIFBIGIE;
class FCOEMCEDLNL;

#define BCNMIFBIGIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFAAA0)
#define BCNMIFBIGIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCFAAB0)
#define BCNMIFBIGIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCFAA70)

	class BCNMIFBIGIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DamateTextFontStyle GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNMIFBIGIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BCNMIFBIGIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCNMIFBIGIE*))((::PBYTE)hIl2Cpp + BCNMIFBIGIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BCNMIFBIGIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCNMIFBIGIE*))((::PBYTE)hIl2Cpp + BCNMIFBIGIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJPIDDDMDDK;

#define GJPIDDDMDDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5AA20)
#define GJPIDDDMDDK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE5AA30)
#define GJPIDDDMDDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5A9F0)

	class GJPIDDDMDDK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID PJHMJKEIGOA; // 0x18
		::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x28
		::System::UInt32 AALPICLABCO; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPIDDDMDDK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJPIDDDMDDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJPIDDDMDDK*))((::PBYTE)hIl2Cpp + GJPIDDDMDDK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJPIDDDMDDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJPIDDDMDDK*))((::PBYTE)hIl2Cpp + GJPIDDDMDDK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

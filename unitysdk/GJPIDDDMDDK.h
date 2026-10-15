#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJPIDDDMDDK;

#define GJPIDDDMDDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C920)
#define GJPIDDDMDDK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE2C930)
#define GJPIDDDMDDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE2C8F0)

inline static constexpr unsigned int GJPIDDDMDDK_TypeDefinitionIndex = 23246;

	class GJPIDDDMDDK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AALPICLABCO; // 0x18
		::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x1C
		::RPG::Client::TextID PJHMJKEIGOA; // 0x20
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

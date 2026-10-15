#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DHNANCPBEPK;
class FCOEMCEDLNL;

#define DHNANCPBEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF54F0)
#define DHNANCPBEPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCF5500)
#define DHNANCPBEPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCF54C0)

inline static constexpr unsigned int DHNANCPBEPK_TypeDefinitionIndex = 19922;

	class DHNANCPBEPK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean BJDOINAHDLN; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FateRinCaseBoardTeamType JCDIEKGKCPP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNANCPBEPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DHNANCPBEPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DHNANCPBEPK*))((::PBYTE)hIl2Cpp + DHNANCPBEPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DHNANCPBEPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DHNANCPBEPK*))((::PBYTE)hIl2Cpp + DHNANCPBEPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

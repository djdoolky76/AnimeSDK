#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class AEFGJJICLON;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define AEFGJJICLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB17A0)
#define AEFGJJICLON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB17B0)
#define AEFGJJICLON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB1770)

	class AEFGJJICLON : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EFPGDCJCLBL; // 0x18
		::RPG::GameCore::TeamType HJJKMPOCPOE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGJJICLON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEFGJJICLON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEFGJJICLON*))((::PBYTE)hIl2Cpp + AEFGJJICLON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AEFGJJICLON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEFGJJICLON*))((::PBYTE)hIl2Cpp + AEFGJJICLON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"
class BNGDIDCJFMG;
class FCOEMCEDLNL;

#define BNGDIDCJFMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BBD10)
#define BNGDIDCJFMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9BBB60)

inline static constexpr unsigned int BNGDIDCJFMG_TypeDefinitionIndex = 15140;

	class BNGDIDCJFMG : public ::System::Object
	{
	public:
		::System::UInt32 JCDIEKGKCPP; // 0x10
		::System::UInt32 ONPPBOKMMKL; // 0x14
		::RPG::GameCore::BattleResultConditionType LOAGIPDPLFM; // 0x18
		::System::UInt32 KJJEEBJNAAA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGDIDCJFMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNGDIDCJFMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNGDIDCJFMG*))((::PBYTE)hIl2Cpp + BNGDIDCJFMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

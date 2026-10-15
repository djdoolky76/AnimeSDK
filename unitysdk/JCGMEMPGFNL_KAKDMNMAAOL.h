#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }

#define JCGMEMPGFNL_KAKDMNMAAOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1657B870)

inline static constexpr unsigned int JCGMEMPGFNL_KAKDMNMAAOL_TypeDefinitionIndex = 56203;

	class JCGMEMPGFNL_KAKDMNMAAOL : public ::System::Object
	{
	public:
		::RPG::GameCore::StageBattleEventRow* FDKPNKAGNFO; // 0x10
		::RPG::GameCore::StageBattleEventConfig* EABKOHGCHFP; // 0x18
		::System::Int32 GGOOEIBFLAD; // 0x20
		::System::Int32 JAGAMOHBBMN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_KAKDMNMAAOL_CTOR_OFFSET))(this);
		}

	};

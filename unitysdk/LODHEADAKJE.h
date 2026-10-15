#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LODHEADAKJE;

#define LODHEADAKJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F2870)
#define LODHEADAKJE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F2740)

inline static constexpr unsigned int LODHEADAKJE_TypeDefinitionIndex = 15138;

	class LODHEADAKJE : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleResultConditionType LOAGIPDPLFM; // 0x10
		::System::UInt32 DBLDCKODNEN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODHEADAKJE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LODHEADAKJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LODHEADAKJE*))((::PBYTE)hIl2Cpp + LODHEADAKJE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

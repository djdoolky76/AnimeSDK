#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectNPCMonsterType.h"
class FCOEMCEDLNL;
class NNDFHGMECMG;

#define NNDFHGMECMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23B770)
#define NNDFHGMECMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D23B620)

inline static constexpr unsigned int NNDFHGMECMG_TypeDefinitionIndex = 20129;

	class NNDFHGMECMG : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LABDELLPODK; // 0x10
		::RPG::GameCore::STDetectNPCMonsterType ABFDDDEHDGN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDFHGMECMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NNDFHGMECMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNDFHGMECMG*))((::PBYTE)hIl2Cpp + NNDFHGMECMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

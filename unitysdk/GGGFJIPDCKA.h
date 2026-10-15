#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GHNMNFHDCME;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define GGGFJIPDCKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C60E830)

inline static constexpr unsigned int GGGFJIPDCKA_TypeDefinitionIndex = 36428;

	class GGGFJIPDCKA : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatInsertAbilityConfig* EABKOHGCHFP; // 0x10
		::IJFIHJJPHNA* LHGPKEGOMKH; // 0x18
		::IJFIHJJPHNA* EOBLJJBOBIN; // 0x20
		::GHNMNFHDCME* ENHCCOOHNKG; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFJIPDCKA_CTOR_OFFSET))(this);
		}

	};

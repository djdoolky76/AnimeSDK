#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GHNMNFHDCME;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define GGGFJIPDCKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE840)

inline static constexpr unsigned int GGGFJIPDCKA_TypeDefinitionIndex = 37356;

	class GGGFJIPDCKA : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatInsertAbilityConfig* EABKOHGCHFP; // 0x10
		::IJFIHJJPHNA* EOBLJJBOBIN; // 0x18
		::GHNMNFHDCME* ENHCCOOHNKG; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x28
		::IJFIHJJPHNA* LHGPKEGOMKH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFJIPDCKA_CTOR_OFFSET))(this);
		}

	};

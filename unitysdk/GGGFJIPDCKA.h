#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GHNMNFHDCME;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define GGGFJIPDCKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63CC00)

inline static constexpr unsigned int GGGFJIPDCKA_TypeDefinitionIndex = 36428;

	class GGGFJIPDCKA : public ::System::Object
	{
	public:
		::IJFIHJJPHNA* LHGPKEGOMKH; // 0x10
		::IJFIHJJPHNA* EOBLJJBOBIN; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x20
		::GHNMNFHDCME* ENHCCOOHNKG; // 0x28
		::RPG::GameCore::DiceCombatInsertAbilityConfig* EABKOHGCHFP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFJIPDCKA_CTOR_OFFSET))(this);
		}

	};

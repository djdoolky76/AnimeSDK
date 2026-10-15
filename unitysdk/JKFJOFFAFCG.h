#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchConditionKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EDKEDOENAKO;

#define JKFJOFFAFCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2162E0)
#define JKFJOFFAFCG_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xB216080)

inline static constexpr unsigned int JKFJOFFAFCG_TypeDefinitionIndex = 63883;

	class JKFJOFFAFCG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFJOFFAFCG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KHJNHDOJDDP(::EDKEDOENAKO* a1, ::RPG::GameCore::ExpeditionBattleBranchConditionKey a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::EDKEDOENAKO*, ::RPG::GameCore::ExpeditionBattleBranchConditionKey))((::PBYTE)hIl2Cpp + JKFJOFFAFCG_KHJNHDOJDDP_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FBCGHKLKHJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define FBCGHKLKHJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9AD00)
#define FBCGHKLKHJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD9AD10)
#define FBCGHKLKHJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD9ACD0)

inline static constexpr unsigned int FBCGHKLKHJN_TypeDefinitionIndex = 23688;

	class FBCGHKLKHJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::StageInvasionMonsterState MEPFOEEGBEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCGHKLKHJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FBCGHKLKHJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBCGHKLKHJN*))((::PBYTE)hIl2Cpp + FBCGHKLKHJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FBCGHKLKHJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBCGHKLKHJN*))((::PBYTE)hIl2Cpp + FBCGHKLKHJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

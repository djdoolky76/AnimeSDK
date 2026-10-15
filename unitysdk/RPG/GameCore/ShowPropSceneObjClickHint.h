#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPropSceneObjClickHint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2A20)
#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2A50)
#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE29D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPropSceneObjClickHint_TypeDefinitionIndex = 22240;

	class ShowPropSceneObjClickHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPropSceneObjClickHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPropSceneObjClickHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPropSceneObjClickHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPropSceneObjClickHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

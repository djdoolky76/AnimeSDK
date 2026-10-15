#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetIsometricRoadLinkerEnable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7200)
#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7230)
#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB71B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIsometricRoadLinkerEnable_TypeDefinitionIndex = 22205;

	class SetIsometricRoadLinkerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

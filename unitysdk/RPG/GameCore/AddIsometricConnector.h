#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddIsometricConnector; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDISOMETRICCONNECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3887C0)
#define RPG_GAMECORE_ADDISOMETRICCONNECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3887F0)
#define RPG_GAMECORE_ADDISOMETRICCONNECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D388770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddIsometricConnector_TypeDefinitionIndex = 22207;

	class AddIsometricConnector : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddIsometricConnector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddIsometricConnector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddIsometricConnector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddIsometricConnector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

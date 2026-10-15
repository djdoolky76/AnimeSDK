#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_AttachAIStatus; }

#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82520)
#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA82530)
#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA824F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_AttachAIStatus_TypeDefinitionIndex = 20115;

	class ST_Side_AttachAIStatus : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIStatus>* AIStatusTags; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

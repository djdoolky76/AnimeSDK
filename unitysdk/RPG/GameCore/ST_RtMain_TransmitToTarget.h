#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_RtMain_TransmitToTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA546B0)
#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA546C0)
#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA54680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtMain_TransmitToTarget_TypeDefinitionIndex = 24077;

	class ST_RtMain_TransmitToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

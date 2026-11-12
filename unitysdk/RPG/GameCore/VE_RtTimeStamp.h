#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTimeScope.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtTimeStamp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTTIMESTAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9A700)
#define RPG_GAMECORE_VE_RTTIMESTAMP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE9A9A0)
#define RPG_GAMECORE_VE_RTTIMESTAMP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE9A940)
#define RPG_GAMECORE_VE_RTTIMESTAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE9A740)
#define RPG_GAMECORE_VE_RTTIMESTAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE9A6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtTimeStamp_TypeDefinitionIndex = 24733;

	class VE_RtTimeStamp : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtTimeScope TimeScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

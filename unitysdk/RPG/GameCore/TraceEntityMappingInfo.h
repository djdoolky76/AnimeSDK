#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TraceEntityMappingInfo; }

#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC283E0)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC283F0)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC283B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceEntityMappingInfo_TypeDefinitionIndex = 20684;

	class TraceEntityMappingInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

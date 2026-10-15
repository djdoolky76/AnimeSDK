#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MappingAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MAPPINGATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D805510)
#define RPG_GAMECORE_MAPPINGATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D805550)
#define RPG_GAMECORE_MAPPINGATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8054B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingAttachPoint_TypeDefinitionIndex = 23192;

	class MappingAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourcePointName; // 0x20
		::System::String* MappingTo; // 0x28
		::System::Boolean IsReset; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

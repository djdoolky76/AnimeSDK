#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamAIConstValue; }
namespace RPG::GameCore { class PamLevelInfo; }

#define RPG_GAMECORE_PAMAICONSTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BD9D0)
#define RPG_GAMECORE_PAMAICONSTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BD630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamAIConstValue_TypeDefinitionIndex = 15623;

	class PamAIConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PamPlane; // 0x10
		::System::UInt32 PamFloor; // 0x14
		::System::UInt32 AnchorGroup; // 0x18
		::System::Single SelectAnchorMaxDistance; // 0x1C
		::System::Single KeepMoodWeightMagnification; // 0x20
		::System::Single KeepAwaySameAnchorWeightPercentage; // 0x24
		::System::UInt32 MoodBuffTurnNumberMin; // 0x28
		::System::UInt32 MoodBuffTurnNumberMax; // 0x2C
		::System::Single MoodBuffCorrection; // 0x30
		::System::Boolean AllowMoodCorretClamp; // 0x34
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::PamLevelInfo*>* PamLevelInfoList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMAICONSTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamAIConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamAIConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMAICONSTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

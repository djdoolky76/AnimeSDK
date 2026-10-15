#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenLookAtType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_LookAt; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA56770)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA56790)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA56730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_LookAt_TypeDefinitionIndex = 21305;

	class ST_Side_Hipplen_LookAt : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenLookAtType LookAtType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AttachPointName; // 0x20
		::System::Single Delay; // 0x28
		::System::Single TransitionTime; // 0x2C
		::System::Boolean OverrideConfigs; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single OverrideBodyWeight; // 0x34
		::System::Single OverrideHeadWeight; // 0x38
		::System::Single OverrideWeightTransitionTime; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

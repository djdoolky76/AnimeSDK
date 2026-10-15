#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenNeckIKType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_Set_Neck_IK; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA571D0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA571E0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA571A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Set_Neck_IK_TypeDefinitionIndex = 21315;

	class ST_Side_Hipplen_Set_Neck_IK : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenNeckIKType IKType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AttachPointName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

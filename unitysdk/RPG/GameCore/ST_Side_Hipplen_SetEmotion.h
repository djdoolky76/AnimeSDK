#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84880)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA848C0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA84820)

namespace RPG::GameCore
{
	class ST_Side_Hipplen_SetEmotion : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* MeshName; // 0x18
		::System::Int32 EmotionIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

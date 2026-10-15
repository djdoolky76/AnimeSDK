#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_BubbleTalk; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA56250)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA56260)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA56210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_BubbleTalk_TypeDefinitionIndex = 21302;

	class ST_Side_Hipplen_BubbleTalk : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::Client::TextID ContentTextID; // 0x18
		::System::Single Duration; // 0x28
		::RPG::MVector3 Offset; // 0x2C
		::System::Boolean InverseDirection; // 0x38
		::System::Boolean CloseBubbleOnExit; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_BUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

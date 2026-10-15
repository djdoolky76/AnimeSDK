#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OrigamiTraceTalk; }
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }

#define RPG_GAMECORE_ORIGAMITRACETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B90B0)
#define RPG_GAMECORE_ORIGAMITRACETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B8F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrigamiTraceTalk_TypeDefinitionIndex = 21869;

	class OrigamiTraceTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::PlayAndWaitSimpleTalk* TalkInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORIGAMITRACETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OrigamiTraceTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OrigamiTraceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORIGAMITRACETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

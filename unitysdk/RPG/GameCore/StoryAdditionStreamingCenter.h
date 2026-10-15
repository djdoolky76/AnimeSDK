#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryAdditionStreamingCenter; }
namespace System { class String; }

#define RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF8D70)
#define RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF8C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAdditionStreamingCenter_TypeDefinitionIndex = 21240;

	class StoryAdditionStreamingCenter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CenterName; // 0x10
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryAdditionStreamingCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryAdditionStreamingCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYADDITIONSTREAMINGCENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

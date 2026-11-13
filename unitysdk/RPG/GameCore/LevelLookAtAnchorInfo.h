#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelLookAtAnchorInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELLOOKATANCHORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D937530)
#define RPG_GAMECORE_LEVELLOOKATANCHORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92CDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLookAtAnchorInfo_TypeDefinitionIndex = 17528;

	class LevelLookAtAnchorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATANCHORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelLookAtAnchorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelLookAtAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATANCHORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

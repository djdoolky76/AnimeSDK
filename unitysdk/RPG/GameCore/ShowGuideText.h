#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideTextPC; }
namespace RPG::GameCore { class ShowGuideText; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDETEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADF920)
#define RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DADF960)
#define RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DADF8C0)

namespace RPG::GameCore
{
	class ShowGuideText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::String* Path; // 0x20
		::System::String* NodeID; // 0x28
		::System::Boolean Show; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* TextPath; // 0x38
		::System::String* Text; // 0x40
		::System::String* ActionName; // 0x48
		::System::Boolean CopyAnchorAndSale; // 0x50
		::System::Boolean Follow; // 0x51
		::System::Boolean Is3DObject; // 0x52
		::System::Boolean PlayFadeOut; // 0x53
		::System::Single OffsetX; // 0x54
		::System::Single OffsetY; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GuideTextPC* PCGuide; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}

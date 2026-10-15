#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuidePC; }
namespace RPG::GameCore { class ShowGuide; }
namespace RPG::GameCore { class TutorialAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADDB70)
#define RPG_GAMECORE_SHOWGUIDE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DADDB80)
#define RPG_GAMECORE_SHOWGUIDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DADDB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuide_TypeDefinitionIndex = 24337;

	class ShowGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::String* Path; // 0x20
		::System::String* NodeID; // 0x28
		::System::Boolean Show; // 0x30
		::System::Boolean CopyAnchorAndSale; // 0x31
		::System::Boolean Follow; // 0x32
		::System::Boolean UseOriginRatio; // 0x33
		::System::Boolean Is3DObject; // 0x34
		::System::Boolean PlayFadeOut; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single OffsetX; // 0x38
		::System::Single OffsetY; // 0x3C
		::System::Single Scale; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* Animation; // 0x48
		::RPG::GameCore::GuidePC* PCGuide; // 0x50
		::RPG::GameCore::TutorialAnimConfig* AnimConfig; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}

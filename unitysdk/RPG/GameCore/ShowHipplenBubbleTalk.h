#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowHipplenBubbleTalk; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE0D70)
#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE0D80)
#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE0D30)

namespace RPG::GameCore
{
	class ShowHipplenBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameTargetType Target; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::RPG::Client::TextID ContentTextID; // 0x28
		::RPG::GameCore::DynamicString* TextmapParam; // 0x38
		::System::Single Duration; // 0x40
		::System::Boolean WaitBubbleFinish; // 0x44
		::System::Byte _padding1[0x3];
		::RPG::MVector3 Offset; // 0x48
		::System::Boolean InverseDirection; // 0x54
		::System::Boolean ArrowUp; // 0x55
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHipplenBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHipplenBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHipplenBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHipplenBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

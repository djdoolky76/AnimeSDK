#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYNPCBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92EE20)
#define RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D92EE40)
#define RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92EDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayNPCBubbleTalk_TypeDefinitionIndex = 20405;

	class PlayNPCBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* BubbleTalkInfoList; // 0x18
		::RPG::GameCore::BubbleTalkType BubbleTalkType; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single LoopInterval; // 0x28
		::System::Boolean InstantFinish; // 0x2C
		::System::Byte _padding1[0x3];
		::System::UInt32 ID; // 0x30
		::System::UInt32 UniqueID; // 0x34
		::System::String* UniqueName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}

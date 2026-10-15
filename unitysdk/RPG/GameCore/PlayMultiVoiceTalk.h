#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiVoiceSelectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayMultiVoiceTalk; }

#define RPG_GAMECORE_PLAYMULTIVOICETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9009A0)
#define RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D9009B0)
#define RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D900960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMultiVoiceTalk_TypeDefinitionIndex = 21124;

	class PlayMultiVoiceTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x18
		::RPG::GameCore::MultiVoiceSelectType SelectType; // 0x1C
		::System::Boolean KeepDisplay; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMultiVoiceTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMultiVoiceTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}

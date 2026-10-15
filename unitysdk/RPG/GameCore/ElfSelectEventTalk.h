#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSelectEventTalk; }

#define RPG_GAMECORE_ELFSELECTEVENTTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638700)
#define RPG_GAMECORE_ELFSELECTEVENTTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6385A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSelectEventTalk_TypeDefinitionIndex = 18494;

	class ElfSelectEventTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::System::Boolean IsPlayerReply; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSELECTEVENTTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSelectEventTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSelectEventTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSELECTEVENTTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

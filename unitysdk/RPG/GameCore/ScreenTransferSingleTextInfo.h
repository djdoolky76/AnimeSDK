#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScreenTransferSingleTextInfo; }

#define RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8B3F0)
#define RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8B350)

namespace RPG::GameCore
{
	class ScreenTransferSingleTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenTransferSingleTextInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenTransferSingleTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

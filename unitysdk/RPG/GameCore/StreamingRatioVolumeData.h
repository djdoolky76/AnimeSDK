#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingRatioVolumeData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A390)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2A490)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB29C50)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2A3A0)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB29550)

namespace RPG::GameCore
{
	class StreamingRatioVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::System::Single RangeBegin; // 0x10
		::System::Single RangeEnd; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

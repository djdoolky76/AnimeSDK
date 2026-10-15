#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceBlockType.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingForceHLODVolumeData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29D00)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB29DB0)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB29C90)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB29D10)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB29590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingForceHLODVolumeData_TypeDefinitionIndex = 19125;

	class StreamingForceHLODVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::RPG::GameCore::ForceBlockType ForceBlockType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

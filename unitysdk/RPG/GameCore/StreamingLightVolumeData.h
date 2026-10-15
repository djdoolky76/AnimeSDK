#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLightMode.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingLightVolumeData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A190)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2A240)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB29CD0)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2A1A0)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB295D0)

namespace RPG::GameCore
{
	class StreamingLightVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::RPG::GameCore::StreamingLightMode LightMode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

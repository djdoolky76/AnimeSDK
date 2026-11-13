#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66C2E0)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E66DAB0)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E66D700)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E66D6A0)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E66D3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingVolumeComponentData_TypeDefinitionIndex = 19311;

	class StreamingVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

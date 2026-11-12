#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED27670)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1ED27C00)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1ED276E0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED27680)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED272D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeComponentData_TypeDefinitionIndex = 19308;

	class StageVolumeComponentData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

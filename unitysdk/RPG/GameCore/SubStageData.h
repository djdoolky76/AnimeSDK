#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubStageData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_SUBSTAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38E20)
#define RPG_GAMECORE_SUBSTAGEDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB38E30)
#define RPG_GAMECORE_SUBSTAGEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubStageData_TypeDefinitionIndex = 19139;

	class SubStageData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 PositionOffset; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubStageData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubStageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}

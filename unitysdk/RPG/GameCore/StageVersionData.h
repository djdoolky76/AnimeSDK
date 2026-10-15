#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVersionData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEVERSIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7910)
#define RPG_GAMECORE_STAGEVERSIONDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DADA7B0)
#define RPG_GAMECORE_STAGEVERSIONDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD8B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVersionData_TypeDefinitionIndex = 19136;

	class StageVersionData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Byte LightVersion; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVersionData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVersionData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}

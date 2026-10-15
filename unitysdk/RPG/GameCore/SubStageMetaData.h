#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubStageMetaData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_SUBSTAGEMETADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB390B0)
#define RPG_GAMECORE_SUBSTAGEMETADATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB390C0)
#define RPG_GAMECORE_SUBSTAGEMETADATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38F80)

namespace RPG::GameCore
{
	class SubStageMetaData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* SubStageDataPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubStageMetaData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubStageMetaData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageMetaData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageMetaData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}

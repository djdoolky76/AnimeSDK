#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapCharacterChangeSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3C830)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3C930)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3C900)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3C840)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3C760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeSource_TypeDefinitionIndex = 23976;

	class TargetMapCharacterChangeSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

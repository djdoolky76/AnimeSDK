#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapCharacterChangeTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3CBB0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3CCB0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3CC80)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3CBC0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3CAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeTarget_TypeDefinitionIndex = 23977;

	class TargetMapCharacterChangeTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

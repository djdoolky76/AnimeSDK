#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3PieceTagApplyConfig; }
namespace RPG::GameCore::Match3 { class Match3TagApplyCondition; }
namespace RPG::GameCore::Match3 { class Match3TagApplyPostAction; }

#define RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84EB20)
#define RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84E970)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3PieceTagApplyConfig_TypeDefinitionIndex = 24940;

	class Match3PieceTagApplyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::PieceTag SourceTag; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::Match3::Match3TagApplyCondition* ApplyCondition; // 0x18
		::RPG::GameCore::Match3::Match3TagApplyPostAction* ApplyPostAction; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3PieceTagApplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3PieceTagApplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

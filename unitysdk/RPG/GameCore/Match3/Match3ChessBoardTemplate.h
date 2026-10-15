#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TemplateEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardTemplate; }

#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84C8C0)
#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84C670)

namespace RPG::GameCore::Match3
{
	class Match3ChessBoardTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::Match3TemplateEffectType EffectType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>* GridInfos; // 0x18
		::System::UInt32 ScoreBonusStyle; // 0x20
		::System::Boolean Enduring; // 0x24
		::System::Byte _padding1[0x3];
		::Il2CppArray<::System::UInt32>* EnvIDs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3ChessBoardTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

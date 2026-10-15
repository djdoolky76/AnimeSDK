#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3D490)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3D540)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3D500)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3D4A0)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3D400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageChunkTargetList_TypeDefinitionIndex = 24022;

	class TargetMapDamageChunkTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

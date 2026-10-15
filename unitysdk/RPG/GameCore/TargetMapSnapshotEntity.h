#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSnapshotEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3F0E0)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3F170)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3F150)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3F0F0)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3F070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSnapshotEntity_TypeDefinitionIndex = 23955;

	class TargetMapSnapshotEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3DF30)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3E020)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3DFF0)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3DF40)
#define RPG_GAMECORE_TARGETMAPPARTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartEntity_TypeDefinitionIndex = 24023;

	class TargetMapPartEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Int32 PartID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

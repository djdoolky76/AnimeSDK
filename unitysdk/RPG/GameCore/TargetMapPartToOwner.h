#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_CTOR_OFFSET UNITYSDK_OFFSET(0x206F5FB0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F60B0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F6080)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F5FC0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F5EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartToOwner_TypeDefinitionIndex = 24414;

	class TargetMapPartToOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveRepeat; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAVATARBYID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB32BF0)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB32D50)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB32D00)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB32C00)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB32BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAvatarByID_TypeDefinitionIndex = 23962;

	class TargetFetchAvatarByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

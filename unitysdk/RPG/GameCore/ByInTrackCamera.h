#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D6540)
#define RPG_GAMECORE_BYINTRACKCAMERA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D6780)
#define RPG_GAMECORE_BYINTRACKCAMERA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D6750)
#define RPG_GAMECORE_BYINTRACKCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D6550)
#define RPG_GAMECORE_BYINTRACKCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D6510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCamera_TypeDefinitionIndex = 20835;

	class ByInTrackCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

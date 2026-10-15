#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInVision; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYINVISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D8170)
#define RPG_GAMECORE_BYINVISION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D8340)
#define RPG_GAMECORE_BYINVISION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D8300)
#define RPG_GAMECORE_BYINVISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D8180)
#define RPG_GAMECORE_BYINVISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D8130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInVision_TypeDefinitionIndex = 20774;

	class ByInVision : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VisionName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

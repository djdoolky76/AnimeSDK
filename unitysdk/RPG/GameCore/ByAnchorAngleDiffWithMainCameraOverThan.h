#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAnchorAngleDiffWithMainCameraOverThan; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D481E10)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D482070)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D482040)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D481E20)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D481DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnchorAngleDiffWithMainCameraOverThan_TypeDefinitionIndex = 22292;

	class ByAnchorAngleDiffWithMainCameraOverThan : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x30
		::System::Single Angle; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

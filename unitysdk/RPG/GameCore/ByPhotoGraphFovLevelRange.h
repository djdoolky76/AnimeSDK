#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPhotoGraphFovLevelRange; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2261B0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E2263F0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E2263C0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2261C0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E226180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphFovLevelRange_TypeDefinitionIndex = 22041;

	class ByPhotoGraphFovLevelRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFovLevel MinLevel; // 0x20
		::RPG::GameCore::PhotoGraphFovLevel MaxLevel; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GridFightShowRightCutIn; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D714D50)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D714D60)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D714D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutIn_TypeDefinitionIndex = 23235;

	class GridFightShowRightCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIPrefabPath; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::String* ImagePath; // 0x30
		::RPG::GameCore::TargetEvaluator* AvatarTargetType; // 0x38
		::System::String* TraitSearchKey; // 0x40
		::RPG::GameCore::DynamicFloat* TraitLv; // 0x48
		::System::Boolean TraitShowAvatarImg; // 0x50
		::System::Byte _padding0[0x7];
		::System::String* AugmentID; // 0x58
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

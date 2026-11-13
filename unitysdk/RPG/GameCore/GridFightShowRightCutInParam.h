#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x18486770)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_ISSHOWTRAIT_OFFSET UNITYSDK_OFFSET(0x18486710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutInParam_TypeDefinitionIndex = 59393;

	class GridFightShowRightCutInParam : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* Role; // 0x10
		::System::String* TraitSearchKey; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* AugmentID; // 0x28
		::System::String* UIPrefabPath; // 0x30
		::System::Int32 Quality; // 0x38
		::System::UInt32 TraitLv; // 0x3C
		::RPG::Client::TextID TitleTextID; // 0x40
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_ISSHOWTRAIT_OFFSET))(this);
		}

	};
}

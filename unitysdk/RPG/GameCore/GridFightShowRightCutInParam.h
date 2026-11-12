#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D9280)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM_ISSHOWTRAIT_OFFSET UNITYSDK_OFFSET(0xF1D9220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutInParam_TypeDefinitionIndex = 59393;

	class GridFightShowRightCutInParam : public ::System::Object
	{
	public:
		::System::String* TraitSearchKey; // 0x10
		::System::String* AugmentID; // 0x18
		::System::String* ImagePath; // 0x20
		::RPG::Client::GridFightRole* Role; // 0x28
		::System::String* UIPrefabPath; // 0x30
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x38
		::System::UInt32 TraitLv; // 0x3C
		::System::Int32 Quality; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TitleTextID; // 0x48
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

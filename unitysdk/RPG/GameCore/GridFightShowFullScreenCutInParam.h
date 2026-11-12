#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowFullScreenCutInType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D91D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutInParam_TypeDefinitionIndex = 59388;

	class GridFightShowFullScreenCutInParam : public ::System::Object
	{
	public:
		::System::String* TraitSearchKey; // 0x10
		::System::String* OverrideImagePath; // 0x18
		::System::UInt32 TraitLv; // 0x20
		::RPG::GameCore::GridFightShowFullScreenCutInType CutInType; // 0x24
		::RPG::Client::TextID OverrideTitle; // 0x28
		::System::Nullable_1<::System::Single> OverrideDelayFadeOutTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINPARAM_CTOR_OFFSET))(this);
		}

	};
}

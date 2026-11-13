#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5B8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameSpotLightBonusEffectData_TypeDefinitionIndex = 67217;

	class GridFightMoonGameSpotLightBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::System::String* TraitIconPath; // 0x18
		::System::UInt32 TraitID; // 0x20
		::System::Boolean HasGranted; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID TitleTextID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC09040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameSpotLightBonusEffectData_TypeDefinitionIndex = 67217;

	class GridFightMoonGameSpotLightBonusEffectData : public ::System::Object
	{
	public:
		::System::String* TraitIconPath; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::Boolean HasGranted; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 TraitID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

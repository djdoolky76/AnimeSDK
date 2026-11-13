#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }

#define RPG_CLIENT_GRIDFIGHTELITEBRANCHBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D169740)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEliteBranchBonusEffectData_TypeDefinitionIndex = 66768;

	class GridFightEliteBranchBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::RPG::Client::TextID TitleTextID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

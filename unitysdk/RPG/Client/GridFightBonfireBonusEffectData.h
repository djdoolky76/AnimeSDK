#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }

#define RPG_CLIENT_GRIDFIGHTBONFIREBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireBonusEffectData_TypeDefinitionIndex = 65865;

	class GridFightBonfireBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::System::UInt32 ModifierUID; // 0x18
		::System::Boolean IsSnapshotRoleAndAddLater; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

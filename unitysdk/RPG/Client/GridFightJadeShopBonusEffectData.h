#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2B5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopBonusEffectData_TypeDefinitionIndex = 67251;

	class GridFightJadeShopBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x18
		::System::UInt32 TraitID; // 0x20
		::System::UInt32 TraitEffectID; // 0x24
		::System::Int32 SlotId; // 0x28
		::UnityEngine::Vector3 StartPos; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

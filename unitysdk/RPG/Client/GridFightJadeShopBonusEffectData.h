#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDBD8CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopBonusEffectData_TypeDefinitionIndex = 67251;

	class GridFightJadeShopBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18
		::UnityEngine::Vector3 StartPos; // 0x20
		::System::UInt32 TraitID; // 0x2C
		::System::UInt32 TraitEffectID; // 0x30
		::System::Int32 SlotId; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }

#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC1D8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingActionBonusEffectData_TypeDefinitionIndex = 66705;

	class GridFightPendingActionBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::System::UInt32 ActionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}

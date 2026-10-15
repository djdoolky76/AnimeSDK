#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTPROJECTILEONHITLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA350C0)
#define RPG_GAMECORE_RTPROJECTILEONHITLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA34F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtProjectileOnHitList_TypeDefinitionIndex = 24140;

	class RtProjectileOnHitList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEONHITLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtProjectileOnHitList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtProjectileOnHitList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEONHITLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

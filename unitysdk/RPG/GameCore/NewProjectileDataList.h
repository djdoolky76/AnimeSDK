#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class NewProjectileDataList; }

#define RPG_GAMECORE_NEWPROJECTILEDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AB9E0)
#define RPG_GAMECORE_NEWPROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AB860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewProjectileDataList_TypeDefinitionIndex = 22586;

	class NewProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x18
		::System::Single Interval; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILEDATALIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewProjectileDataList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewProjectileDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialSetGoldNumParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70D710)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70D450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialSetGoldNumParam_TypeDefinitionIndex = 19969;

	class GridFightPrepTutorialSetGoldNumParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsDelta; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 Value; // 0x14
		::System::Boolean LockRefresh; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

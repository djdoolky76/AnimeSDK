#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongGridIndex; }

#define RPG_GAMECORE_PINGPONGGRIDINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EA520)
#define RPG_GAMECORE_PINGPONGGRIDINDEX_IJCIDBCJEEI_OFFSET UNITYSDK_OFFSET(0x1D8EA530)
#define RPG_GAMECORE_PINGPONGGRIDINDEX_LKGNIJOINHD_OFFSET UNITYSDK_OFFSET(0x1D8EA540)
#define RPG_GAMECORE_PINGPONGGRIDINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EA3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongGridIndex_TypeDefinitionIndex = 17002;

	class PingPongGridIndex : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 z; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongGridIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongGridIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Single IJCIDBCJEEI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_IJCIDBCJEEI_OFFSET))(this);
		}

		::System::Single LKGNIJOINHD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGRIDINDEX_LKGNIJOINHD_OFFSET))(this);
		}

	};
}

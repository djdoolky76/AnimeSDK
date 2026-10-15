#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InfiniteWaveNextMonsterId; }
namespace System { class String; }

#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D786F70)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D786F80)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D786F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveNextMonsterId_TypeDefinitionIndex = 22766;

	class InfiniteWaveNextMonsterId : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* MonsterIDKey; // 0x20
		::System::String* EliteGroupKey; // 0x28
		::System::String* MonsterSlotKey; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

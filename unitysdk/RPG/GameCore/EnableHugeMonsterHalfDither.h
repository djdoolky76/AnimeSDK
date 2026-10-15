#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableHugeMonsterHalfDither; }

#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D611B20)
#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D611B30)
#define RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D611AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableHugeMonsterHalfDither_TypeDefinitionIndex = 22677;

	class EnableHugeMonsterHalfDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableHugeMonsterHalfDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableHugeMonsterHalfDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEHUGEMONSTERHALFDITHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

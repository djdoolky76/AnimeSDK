#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIMonsterIDSelector; }

#define RPG_GAMECORE_AIMONSTERIDSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30C880)
#define RPG_GAMECORE_AIMONSTERIDSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30C890)
#define RPG_GAMECORE_AIMONSTERIDSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIMonsterIDSelector_TypeDefinitionIndex = 15601;

	class AIMonsterIDSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterIDList; // 0x10
		::System::Boolean InverseResultFlag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIMonsterIDSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIMonsterIDSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIMonsterIDSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIMonsterIDSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERIDSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

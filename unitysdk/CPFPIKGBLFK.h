#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CPFPIKGBLFK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CPFPIKGBLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBCFF0)
#define CPFPIKGBLFK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCBD000)
#define CPFPIKGBLFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCBCFC0)

inline static constexpr unsigned int CPFPIKGBLFK_TypeDefinitionIndex = 23687;

	class CPFPIKGBLFK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonsterWeaknessSpecialType KFEMJMKMGIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFPIKGBLFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPFPIKGBLFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPFPIKGBLFK*))((::PBYTE)hIl2Cpp + CPFPIKGBLFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CPFPIKGBLFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPFPIKGBLFK*))((::PBYTE)hIl2Cpp + CPFPIKGBLFK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

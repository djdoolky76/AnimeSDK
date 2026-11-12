#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KBFMLFJCDEI;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define KBFMLFJCDEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E250360)
#define KBFMLFJCDEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E250410)
#define KBFMLFJCDEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E250280)

inline static constexpr unsigned int KBFMLFJCDEI_TypeDefinitionIndex = 23598;

	class KBFMLFJCDEI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FBDCAKFILLA; // 0x18
		::RPG::GameCore::DynamicFloat* PPFJEOOPFMM; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFMLFJCDEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KBFMLFJCDEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBFMLFJCDEI*))((::PBYTE)hIl2Cpp + KBFMLFJCDEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KBFMLFJCDEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBFMLFJCDEI*))((::PBYTE)hIl2Cpp + KBFMLFJCDEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

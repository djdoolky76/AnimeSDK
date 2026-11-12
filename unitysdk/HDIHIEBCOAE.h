#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HDIHIEBCOAE;
namespace RPG::GameCore { class TargetEvaluator; }

#define HDIHIEBCOAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E071150)
#define HDIHIEBCOAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E071160)
#define HDIHIEBCOAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E071120)

inline static constexpr unsigned int HDIHIEBCOAE_TypeDefinitionIndex = 21415;

	class HDIHIEBCOAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIHIEBCOAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HDIHIEBCOAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDIHIEBCOAE*))((::PBYTE)hIl2Cpp + HDIHIEBCOAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HDIHIEBCOAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDIHIEBCOAE*))((::PBYTE)hIl2Cpp + HDIHIEBCOAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

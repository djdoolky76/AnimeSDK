#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHONOHOIOJA;
namespace RPG::GameCore { class TargetEvaluator; }

#define OHONOHOIOJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2814A0)
#define OHONOHOIOJA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2814B0)
#define OHONOHOIOJA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D281470)

inline static constexpr unsigned int OHONOHOIOJA_TypeDefinitionIndex = 19902;

	class OHONOHOIOJA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* ACJEBIJEHOK; // 0x20
		::RPG::GameCore::FateRinActionIntentType FMKBONPIOAG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONOHOIOJA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHONOHOIOJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHONOHOIOJA*))((::PBYTE)hIl2Cpp + OHONOHOIOJA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHONOHOIOJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHONOHOIOJA*))((::PBYTE)hIl2Cpp + OHONOHOIOJA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

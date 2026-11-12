#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PCMMMJCEELO;
namespace RPG::GameCore { class DynamicFloat; }

#define PCMMMJCEELO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D77E0)
#define PCMMMJCEELO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4D77F0)
#define PCMMMJCEELO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4D77B0)

inline static constexpr unsigned int PCMMMJCEELO_TypeDefinitionIndex = 10200;

	class PCMMMJCEELO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMMJCEELO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PCMMMJCEELO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCMMMJCEELO*))((::PBYTE)hIl2Cpp + PCMMMJCEELO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PCMMMJCEELO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCMMMJCEELO*))((::PBYTE)hIl2Cpp + PCMMMJCEELO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IEICGPPGDAO;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define IEICGPPGDAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD3A0)
#define IEICGPPGDAO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEBD3B0)
#define IEICGPPGDAO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEBD370)

inline static constexpr unsigned int IEICGPPGDAO_TypeDefinitionIndex = 23724;

	class IEICGPPGDAO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GPOICLIDHEH; // 0x18
		::RPG::GameCore::TargetEvaluator* KKJIDEIGBIF; // 0x20
		::RPG::GameCore::TargetEvaluator* BPCHFCBIOEB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEICGPPGDAO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IEICGPPGDAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IEICGPPGDAO*))((::PBYTE)hIl2Cpp + IEICGPPGDAO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IEICGPPGDAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IEICGPPGDAO*))((::PBYTE)hIl2Cpp + IEICGPPGDAO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

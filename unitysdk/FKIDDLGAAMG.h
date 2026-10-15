#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FKIDDLGAAMG;
namespace RPG::GameCore { class TargetEvaluator; }

#define FKIDDLGAAMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF090)
#define FKIDDLGAAMG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFF0A0)
#define FKIDDLGAAMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFF060)

inline static constexpr unsigned int FKIDDLGAAMG_TypeDefinitionIndex = 22106;

	class FKIDDLGAAMG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDDLGAAMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FKIDDLGAAMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FKIDDLGAAMG*))((::PBYTE)hIl2Cpp + FKIDDLGAAMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FKIDDLGAAMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FKIDDLGAAMG*))((::PBYTE)hIl2Cpp + FKIDDLGAAMG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

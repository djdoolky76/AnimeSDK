#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FPONDLFPJHM;
namespace RPG::GameCore { class TargetEvaluator; }

#define FPONDLFPJHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1DC30)
#define FPONDLFPJHM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE1DC40)
#define FPONDLFPJHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE1DC00)

inline static constexpr unsigned int FPONDLFPJHM_TypeDefinitionIndex = 21247;

	class FPONDLFPJHM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPONDLFPJHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPONDLFPJHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPONDLFPJHM*))((::PBYTE)hIl2Cpp + FPONDLFPJHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FPONDLFPJHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPONDLFPJHM*))((::PBYTE)hIl2Cpp + FPONDLFPJHM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

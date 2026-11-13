#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HFBIPMKIEFP;
namespace RPG::GameCore { class TargetEvaluator; }

#define HFBIPMKIEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80D140)
#define HFBIPMKIEFP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E80D030)
#define HFBIPMKIEFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9F1E00)

inline static constexpr unsigned int HFBIPMKIEFP_TypeDefinitionIndex = 22412;

	class HFBIPMKIEFP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBIPMKIEFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFBIPMKIEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFBIPMKIEFP*))((::PBYTE)hIl2Cpp + HFBIPMKIEFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HFBIPMKIEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFBIPMKIEFP*))((::PBYTE)hIl2Cpp + HFBIPMKIEFP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

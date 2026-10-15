#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class FPHCKGCLMAF;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define FPHCKGCLMAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1AAB0)
#define FPHCKGCLMAF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE1AAC0)
#define FPHCKGCLMAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE1AA80)

inline static constexpr unsigned int FPHCKGCLMAF_TypeDefinitionIndex = 20132;

	class FPHCKGCLMAF : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHCKGCLMAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPHCKGCLMAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPHCKGCLMAF*))((::PBYTE)hIl2Cpp + FPHCKGCLMAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FPHCKGCLMAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPHCKGCLMAF*))((::PBYTE)hIl2Cpp + FPHCKGCLMAF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

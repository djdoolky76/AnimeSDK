#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GFODFDCBFJF;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GFODFDCBFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3E340)
#define GFODFDCBFJF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3E350)
#define GFODFDCBFJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3E300)

inline static constexpr unsigned int GFODFDCBFJF_TypeDefinitionIndex = 23278;

	class GFODFDCBFJF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HKFBIPNCBII; // 0x18
		::System::String* OEOMFBFJHDM; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::ActionDelayChangeTypeMask KHGGDOMNEJA; // 0x30
		::System::Boolean PBNJDHFCHHC; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFODFDCBFJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFODFDCBFJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFODFDCBFJF*))((::PBYTE)hIl2Cpp + GFODFDCBFJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFODFDCBFJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFODFDCBFJF*))((::PBYTE)hIl2Cpp + GFODFDCBFJF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

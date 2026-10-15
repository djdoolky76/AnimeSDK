#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class APMEENONPPK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define APMEENONPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEE800)
#define APMEENONPPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCEE8D0)
#define APMEENONPPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEE700)

inline static constexpr unsigned int APMEENONPPK_TypeDefinitionIndex = 24084;

	class APMEENONPPK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* JLDBMPIOAED; // 0x18
		::System::String* PODFJDMHFMK; // 0x20
		::System::String* FKODHMAJOAB; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMEENONPPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APMEENONPPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APMEENONPPK*))((::PBYTE)hIl2Cpp + APMEENONPPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::APMEENONPPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APMEENONPPK*))((::PBYTE)hIl2Cpp + APMEENONPPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

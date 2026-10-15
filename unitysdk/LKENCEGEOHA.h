#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LKENCEGEOHA;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define LKENCEGEOHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DA360)
#define LKENCEGEOHA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0DA370)
#define LKENCEGEOHA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0DA330)

inline static constexpr unsigned int LKENCEGEOHA_TypeDefinitionIndex = 24189;

	class LKENCEGEOHA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
		::System::Boolean CIHJDEJJNOA; // 0x28
		::System::Boolean JEJPBIGFOOB; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKENCEGEOHA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LKENCEGEOHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKENCEGEOHA*))((::PBYTE)hIl2Cpp + LKENCEGEOHA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LKENCEGEOHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKENCEGEOHA*))((::PBYTE)hIl2Cpp + LKENCEGEOHA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

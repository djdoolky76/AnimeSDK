#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LIGMIDILOAE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define LIGMIDILOAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F8550)
#define LIGMIDILOAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F8590)
#define LIGMIDILOAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F84F0)

	class LIGMIDILOAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LOHDABKNJCO; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::SkillType JBCBONFABOM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMIDILOAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LIGMIDILOAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LIGMIDILOAE*))((::PBYTE)hIl2Cpp + LIGMIDILOAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LIGMIDILOAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LIGMIDILOAE*))((::PBYTE)hIl2Cpp + LIGMIDILOAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

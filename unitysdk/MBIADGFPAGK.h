#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MBIADGFPAGK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define MBIADGFPAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D135000)
#define MBIADGFPAGK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D135010)
#define MBIADGFPAGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D134FD0)

	class MBIADGFPAGK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* JPMFDBJAMNO; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::DynamicFloat* MMMKMGJLEFP; // 0x28
		::RPG::GameCore::DynamicFloat* BHKHHEJDHGF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIADGFPAGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MBIADGFPAGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBIADGFPAGK*))((::PBYTE)hIl2Cpp + MBIADGFPAGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MBIADGFPAGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBIADGFPAGK*))((::PBYTE)hIl2Cpp + MBIADGFPAGK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

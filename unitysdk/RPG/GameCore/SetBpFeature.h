#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBpFeature; }
namespace RPG::GameCore { class SpecialBpFeature; }

#define RPG_GAMECORE_SETBPFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAB450)
#define RPG_GAMECORE_SETBPFEATURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECAB460)
#define RPG_GAMECORE_SETBPFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECAB420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBpFeature_TypeDefinitionIndex = 23655;

	class SetBpFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpecialBpFeature* SpecialBpFeature; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBpFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBpFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPFEATURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

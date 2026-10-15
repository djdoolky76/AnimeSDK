#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddStageAbilityByName; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38BB00)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38BB10)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38BAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStageAbilityByName_TypeDefinitionIndex = 22971;

	class AddStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Boolean ReadFromTable; // 0x20
		::System::Boolean CanReplace; // 0x21
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

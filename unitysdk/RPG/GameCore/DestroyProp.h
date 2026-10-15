#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DESTROYPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD0F0)
#define RPG_GAMECORE_DESTROYPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FD120)
#define RPG_GAMECORE_DESTROYPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FD0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyProp_TypeDefinitionIndex = 21949;

	class DestroyProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::RPG::GameCore::DynamicFloat* ID; // 0x28
		::RPG::GameCore::DynamicFloat* GroupID; // 0x30
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* DestroyList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

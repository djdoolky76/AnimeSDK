#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateNPCV2; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class NpcEntityInfo; }

#define RPG_GAMECORE_CREATENPCV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6700)
#define RPG_GAMECORE_CREATENPCV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B6710)
#define RPG_GAMECORE_CREATENPCV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B66D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPCV2_TypeDefinitionIndex = 21945;

	class CreateNPCV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::RPG::GameCore::DynamicString* NPCUniqueName; // 0x28
		::RPG::GameCore::DynamicString* DefaultIdleStateName; // 0x30
		::Il2CppArray<::RPG::GameCore::NpcEntityInfo*>* CreateList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateNPCV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateNPCV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateNPCV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateNPCV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

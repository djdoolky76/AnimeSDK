#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreatePropV2; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_CREATEPROPV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5850)
#define RPG_GAMECORE_CREATEPROPV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5860)
#define RPG_GAMECORE_CREATEPROPV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E5820)

namespace RPG::GameCore
{
	class CreatePropV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* CreateList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePropV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePropV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePropV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePropV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

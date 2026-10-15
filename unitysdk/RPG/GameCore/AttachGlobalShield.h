#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachGlobalShield; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ATTACHGLOBALSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D40D0)
#define RPG_GAMECORE_ATTACHGLOBALSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3D40E0)
#define RPG_GAMECORE_ATTACHGLOBALSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D40A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachGlobalShield_TypeDefinitionIndex = 23599;

	class AttachGlobalShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InitHP; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetShieldAdd; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetShieldRemove; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachGlobalShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachGlobalShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

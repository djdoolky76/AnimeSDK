#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetGlobalShaderProperty; }
namespace RPG::GameCore { class ShaderPropertySetItem; }

#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4A70)
#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB4A80)
#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB4A40)

namespace RPG::GameCore
{
	class SetGlobalShaderProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ShaderPropertySetItem*>* Properties; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGlobalShaderProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGlobalShaderProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGlobalShaderProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGlobalShaderProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

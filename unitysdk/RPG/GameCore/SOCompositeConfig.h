#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SOCompositeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SOCOMPOSITECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6F3B0)
#define RPG_GAMECORE_SOCOMPOSITECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6F150)
#define RPG_GAMECORE_SOCOMPOSITECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6E950)

namespace RPG::GameCore
{
	class SOCompositeConfig : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* WaitMessages; // 0x18
		::System::Boolean CompleteAfterMessage; // 0x20
		::System::Boolean DisableLookAt; // 0x21
		::System::Boolean EnableTalk; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SOCompositeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SOCompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SOCompositeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SOCompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

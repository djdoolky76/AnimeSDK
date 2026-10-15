#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class SharedJsonConfig; }

#define RPG_GAMECORE_SHAREDJSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD09E0)
#define RPG_GAMECORE_SHAREDJSONCONFIG_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAD0AC0)
#define RPG_GAMECORE_SHAREDJSONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD09F0)
#define RPG_GAMECORE_SHAREDJSONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD09B0)

namespace RPG::GameCore
{
	class SharedJsonConfig : public ::RPG::GameCore::SharedValue
	{
	public:
		::RPG::GameCore::DynamicJsonConfig* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_IMGLGAIIPCA_OFFSET))(this);
		}

	};
}

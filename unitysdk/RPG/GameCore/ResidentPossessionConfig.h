#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResidentPossessionConfig; }
namespace RPG::GameCore { class ResidentPossessionConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98CCC0)
#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98CB30)

namespace RPG::GameCore
{
	class ResidentPossessionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* IgnorePrefixList; // 0x10
		::Il2CppArray<::System::String*>* IgnoreSuffixList; // 0x18
		::Il2CppArray<::RPG::GameCore::ResidentPossessionConfigItem*>* ConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResidentPossessionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResidentPossessionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

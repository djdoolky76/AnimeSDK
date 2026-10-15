#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PassageConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PASSAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F07B0)
#define RPG_GAMECORE_PASSAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F0630)

namespace RPG::GameCore
{
	class PassageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Start; // 0x10
		::System::String* End; // 0x18
		::System::Single Distance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PassageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PassageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

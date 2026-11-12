#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxNamedProfile; }
namespace RPG::GameCore { class LittleGameSandboxProfile; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXNAMEDPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA278E0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXNAMEDPROFILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA277D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxNamedProfile_TypeDefinitionIndex = 19096;

	class LittleGameSandboxNamedProfile : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::LittleGameSandboxProfile* Profile; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXNAMEDPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxNamedProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxNamedProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXNAMEDPROFILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

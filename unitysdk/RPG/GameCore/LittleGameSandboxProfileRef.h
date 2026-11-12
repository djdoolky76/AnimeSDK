#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxProfileRef; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXPROFILEREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA28910)
#define RPG_GAMECORE_LITTLEGAMESANDBOXPROFILEREF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA243F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxProfileRef_TypeDefinitionIndex = 19094;

	class LittleGameSandboxProfileRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean UseGlobalProfile; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* ProfileName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPROFILEREF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxProfileRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxProfileRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPROFILEREF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

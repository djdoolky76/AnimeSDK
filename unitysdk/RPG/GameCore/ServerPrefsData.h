#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerPrefsData; }
namespace System { class String; }

#define RPG_GAMECORE_SERVERPREFSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA645D0)
#define RPG_GAMECORE_SERVERPREFSDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA644D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerPrefsData_TypeDefinitionIndex = 24416;

	class ServerPrefsData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxLength; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ValueType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerPrefsData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerPrefsData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

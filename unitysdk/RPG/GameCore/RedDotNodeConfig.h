#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedDotNodeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_REDDOTNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D947EA0)
#define RPG_GAMECORE_REDDOTNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D947BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotNodeConfig_TypeDefinitionIndex = 17093;

	class RedDotNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10
		::System::UInt32 RedDotID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::RPG::GameCore::RedDotType Type; // 0x20
		::System::Boolean HasInstanceKeys; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::System::String*>* Children; // 0x28
		::Il2CppArray<::System::UInt32>* ChildWeights; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTNODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedDotNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedDotNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTNODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

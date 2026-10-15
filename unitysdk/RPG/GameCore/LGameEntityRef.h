#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LGameEntityRef; }

#define RPG_GAMECORE_LGAMEENTITYREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A3280)
#define RPG_GAMECORE_LGAMEENTITYREF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A3140)

namespace RPG::GameCore
{
	class LGameEntityRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ContainerID; // 0x14
		::System::UInt32 EntityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LGAMEENTITYREF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LGameEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LGAMEENTITYREF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

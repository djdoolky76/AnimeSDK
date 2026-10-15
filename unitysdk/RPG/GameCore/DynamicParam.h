#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicParam; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D629960)
#define RPG_GAMECORE_DYNAMICPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6297B0)

namespace RPG::GameCore
{
	class DynamicParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerKey; // 0x10
		::System::UInt32 Index; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

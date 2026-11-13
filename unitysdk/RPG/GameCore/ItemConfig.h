#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_ITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9F2C0)
#define RPG_GAMECORE_ITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE9F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemConfig_TypeDefinitionIndex = 13138;

	class ItemConfig : public ::System::Object
	{
	public:
		::System::UInt32 ItemNum; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

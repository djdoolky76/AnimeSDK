#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisplayItemConfig; }

#define RPG_GAMECORE_DISPLAYITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EA4E0)
#define RPG_GAMECORE_DISPLAYITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EA3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisplayItemConfig_TypeDefinitionIndex = 10897;

	class DisplayItemConfig : public ::System::Object
	{
	public:
		::System::UInt32 ItemNum; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPLAYITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisplayItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisplayItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPLAYITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

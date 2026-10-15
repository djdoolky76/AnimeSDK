#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDailyIcon; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDAILYICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91B670)
#define RPG_GAMECORE_PROPDAILYICON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91B4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDailyIcon_TypeDefinitionIndex = 12547;

	class PropDailyIcon : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::UInt32 IconID; // 0x18
		::System::Boolean IsActive; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAILYICON_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDailyIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDailyIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAILYICON_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommonActiveSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CBFC0)
#define RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5CB9D0)

namespace RPG::GameCore
{
	class CommonActiveSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::UInt32 CommonActiveSkillID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonActiveSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonActiveSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityThemeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTHEMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D383A70)
#define RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D383820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityThemeRow_TypeDefinitionIndex = 11213;

	class ActivityThemeRow : public ::System::Object
	{
	public:
		::System::String* CornerIconPath; // 0x10
		::System::String* LittleCornerIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 ThemeID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityThemeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityThemeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

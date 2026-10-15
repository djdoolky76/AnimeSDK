#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelAbilityRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58F210)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58EF60)

namespace RPG::GameCore
{
	class ChenLingFesLevelAbilityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AbilityDesc; // 0x28
		::RPG::Client::TextID AbilityName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelAbilityRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelAbilityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

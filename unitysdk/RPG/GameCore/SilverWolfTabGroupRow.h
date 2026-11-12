#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class SilverWolfTabGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFTABGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB4C0)
#define RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ECFB1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfTabGroupRow_TypeDefinitionIndex = 12416;

	class SilverWolfTabGroupRow : public ::System::Object
	{
	public:
		::System::String* ExploreFigurePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* RaidFigurePath; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x28
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SilverWolfTabGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SilverWolfTabGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

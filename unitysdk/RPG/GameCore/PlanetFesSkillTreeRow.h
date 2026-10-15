#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSkillTreeRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESSKILLTREEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FDDE0)
#define RPG_GAMECORE_PLANETFESSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FDA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSkillTreeRow_TypeDefinitionIndex = 12207;

	class PlanetFesSkillTreeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x10
		::Il2CppArray<::System::UInt32>* LevelCostList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::String* Icon; // 0x28
		::Il2CppArray<::System::UInt32>* LevelSkillList; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 MaxLevel; // 0x48
		::System::UInt32 SkillID; // 0x4C
		::System::UInt32 Phase; // 0x50
		::System::Boolean IsImportant; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

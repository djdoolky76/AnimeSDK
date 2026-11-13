#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildTagConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC81770)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC80FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTagConfigRow_TypeDefinitionIndex = 11466;

	class EvolveBuildTagConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::EvolveBuildSeason Season; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ExtraEffectID; // 0x30
		::System::UInt32 ShopSkillID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildTagConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

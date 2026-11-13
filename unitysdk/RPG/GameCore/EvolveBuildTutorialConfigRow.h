#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildTutorialConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC82720)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC82030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTutorialConfigRow_TypeDefinitionIndex = 11485;

	class EvolveBuildTutorialConfigRow : public ::System::Object
	{
	public:
		::System::String* TutorialID; // 0x10
		::RPG::GameCore::EvolveBuildSeason Season; // 0x18
		::System::UInt32 WeaponLevel; // 0x1C
		::System::UInt32 StageMergedID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildTutorialConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildTutorialConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

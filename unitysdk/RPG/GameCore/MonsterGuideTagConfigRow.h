#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }

#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6770)
#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B6410)

namespace RPG::GameCore
{
	class MonsterGuideTagConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::Il2CppArray<::System::UInt32>* EffectID; // 0x18
		::RPG::Client::TextID TagBriefDescription; // 0x20
		::RPG::Client::TextID TagDetailDescription; // 0x30
		::System::UInt32 SkillID; // 0x40
		::System::UInt32 TagID; // 0x44
		::RPG::Client::TextID TagName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterGuideTagConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterGuideTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

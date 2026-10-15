#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfSpecialEventEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSpecialEventEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSPECIALEVENTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6390D0)
#define RPG_GAMECORE_ELFSPECIALEVENTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D638EE0)

namespace RPG::GameCore
{
	class ElfSpecialEventEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfSpecialEventEffectType EffectType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* ElfBuffList; // 0x18
		::System::UInt32 RewardID; // 0x20
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::UInt32>* SubmissionIDList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

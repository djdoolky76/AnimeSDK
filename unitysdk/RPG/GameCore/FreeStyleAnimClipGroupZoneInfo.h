#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5460)
#define RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C52A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimClipGroupZoneInfo_TypeDefinitionIndex = 16304;

	class FreeStyleAnimClipGroupZoneInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ClipNames; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* ClipHashSet; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5630)
#define RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C54A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimClipZoneInfo_TypeDefinitionIndex = 16305;

	class FreeStyleAnimClipZoneInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ClipName; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Int32 ClipHash; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimClipZoneInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimClipZoneInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

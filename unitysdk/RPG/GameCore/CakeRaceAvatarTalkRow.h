#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceAvatarTalkRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEAVATARTALKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51D3C0)
#define RPG_GAMECORE_CAKERACEAVATARTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D51D130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAvatarTalkRow_TypeDefinitionIndex = 11027;

	class CakeRaceAvatarTalkRow : public ::System::Object
	{
	public:
		::System::String* AvatarIcon; // 0x10
		::System::String* FemaleAvatarIcon; // 0x18
		::System::UInt32 AvatarTalkID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarName; // 0x28
		::RPG::Client::TextID TalkText; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAVATARTALKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceAvatarTalkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceAvatarTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAVATARTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAtlasRow; }

#define RPG_GAMECORE_AVATARATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3900)
#define RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEC30E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAtlasRow_TypeDefinitionIndex = 12768;

	class AvatarAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CV_JP; // 0x18
		::System::Boolean DefaultUnlock; // 0x28
		::System::Byte _padding1[0x3];
		::System::UInt32 CampID; // 0x2C
		::RPG::Client::TextID CV_EN; // 0x30
		::RPG::Client::TextID CV_CN; // 0x40
		::RPG::Client::TextID CV_KR; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

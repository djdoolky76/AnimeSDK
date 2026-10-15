#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAtlasRow; }

#define RPG_GAMECORE_AVATARATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DE640)
#define RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3DDE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAtlasRow_TypeDefinitionIndex = 12701;

	class AvatarAtlasRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CV_KR; // 0x10
		::System::UInt32 AvatarID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CV_EN; // 0x28
		::RPG::Client::TextID CV_CN; // 0x38
		::System::UInt32 CampID; // 0x48
		::System::Boolean DefaultUnlock; // 0x4C
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID CV_JP; // 0x50
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

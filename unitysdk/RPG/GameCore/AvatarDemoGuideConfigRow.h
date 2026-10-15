#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoGuideConfigRow; }

#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E28A0)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E21B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideConfigRow_TypeDefinitionIndex = 12779;

	class AvatarDemoGuideConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::UInt32 StageID; // 0x14
		::RPG::Client::TextID AvatarDemoIntroduction; // 0x18
		::System::UInt32 Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDemoGuideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDemoGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

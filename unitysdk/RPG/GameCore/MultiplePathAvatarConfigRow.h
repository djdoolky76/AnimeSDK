#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class MultiplePathAvatarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9F10)
#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAD9B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiplePathAvatarConfigRow_TypeDefinitionIndex = 12871;

	class MultiplePathAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* ChangeConfigPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::Boolean AllowRepeatUnlockReward; // 0x20
		::System::Boolean IsEarlyUnlock; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GenderType Gender; // 0x24
		::System::UInt32 BaseAvatarID; // 0x28
		::System::UInt32 AvatarID; // 0x2C
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID UnlockToast; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MultiplePathAvatarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MultiplePathAvatarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

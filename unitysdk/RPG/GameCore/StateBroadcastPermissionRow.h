#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StateBroadcastPermissionRow; }
namespace System { class String; }

#define RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F120)
#define RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB1EFD0)

namespace RPG::GameCore
{
	class StateBroadcastPermissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* InfoList; // 0x10
		::System::String* PackageName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateBroadcastPermissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateBroadcastPermissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

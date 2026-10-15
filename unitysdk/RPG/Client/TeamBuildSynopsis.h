#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TeamBuildSynopsis; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET UNITYSDK_OFFSET(0xE1C7540)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS_CTOR_OFFSET UNITYSDK_OFFSET(0xE1CBE90)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0xE1CBE80)

namespace RPG::Client
{
	class TeamBuildSynopsis : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
		// static const ::System::Object _AvatarIDCount; // 0x0
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET))(this);
		}

		static ::RPG::Client::TeamBuildSynopsis* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET))(a1, a2, a3);
		}

	};
}

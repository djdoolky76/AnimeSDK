#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENOBKLGCHOD;
class GLJEONJGIFB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET UNITYSDK_OFFSET(0xEA17370)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xEA174E0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xEA16EA0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA16FA0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEA17650)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEA17670)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xEA17690)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET UNITYSDK_OFFSET(0xEA17090)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xEA171A0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xEA16F50)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEA17660)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEA17680)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xEA176A0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xEA17020)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePickAvatarInfo_TypeDefinitionIndex = 69107;

	class RoguePickAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PickTrialAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _PickAvatarIDs_k__BackingField; // 0x18
		::GLJEONJGIFB* _SendPacketCmd_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::GLJEONJGIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLJEONJGIFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::ENOBKLGCHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENOBKLGCHOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void RefreshPickAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET))(this, a1);
		}

		::System::Void RefreshPickTrialAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET))(this, a1);
		}

		::System::Void AddPickAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddPickTrialAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickTrialAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET))(this, a1);
		}

		::GLJEONJGIFB* get_SendPacketCmd()
		{
			return ((::GLJEONJGIFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::GLJEONJGIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLJEONJGIFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, a1);
		}

	};
}

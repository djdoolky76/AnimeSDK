#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/ChatMessageExtendData.h"
class ECCKHOLLPPC;
namespace RPG::Client { class ChatMessageInviteData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATMESSAGEINVITEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD390050)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD390640)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xD3905B0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD390860)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD390590)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xD390550)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD390570)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xD390740)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xD390800)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD3905A0)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xD390560)
#define RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD390580)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageInviteData_TypeDefinitionIndex = 64659;

	class ChatMessageInviteData : public ::RPG::Client::ChatMessageExtendData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList_k__BackingField; // 0x18
		::System::UInt64 _LobbyID_k__BackingField; // 0x20
		::FJPMJPEKLJL _PlayType_k__BackingField; // 0x28
		::System::Void _ctor(::ECCKHOLLPPC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKHOLLPPC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 get_LobbyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_LOBBYID_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL get_PlayType()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Void set_PlayType(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_PLAYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GameParamList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GET_GAMEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_GameParamList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_SET_GAMEPARAMLIST_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::ChatMessageInviteData* a1, ::RPG::Client::ChatMessageInviteData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::ChatMessageInviteData* a1, ::RPG::Client::ChatMessageInviteData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageInviteData*, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEINVITEDATA_GETHASHCODE_OFFSET))(this);
		}

	};
}

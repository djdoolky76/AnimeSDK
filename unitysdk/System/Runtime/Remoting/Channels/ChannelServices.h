#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IList; }
namespace System::Runtime::Remoting { class ChannelData; }
namespace System::Runtime::Remoting { class ProviderData; }
namespace System::Runtime::Remoting::Channels { class IChannel; }
namespace System::Runtime::Remoting::Channels { class IChannelSender; }
namespace System::Runtime::Remoting::Contexts { class CrossContextChannel; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Messaging { class ReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6C40)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DAD6130)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DAD64E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_1_OFFSET UNITYSDK_OFFSET(0x1DAD3A30)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1DAD2960)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1DAD5CF0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET UNITYSDK_OFFSET(0x1DAD1D10)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GET_CROSSCONTEXTCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DAD2900)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_ISLOCALCALL_OFFSET UNITYSDK_OFFSET(0x1DAD6B60)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1DAD46C0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_1_OFFSET UNITYSDK_OFFSET(0x1DAD3E10)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DAD3C20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DAD6060)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int ChannelServices_TypeDefinitionIndex = 1262;

	class ChannelServices : public ::System::Object
	{
	public:
		static ::System::Collections::IList** StaticGet_oldStartModeTypes()
		{
			return (::System::Collections::IList**)UnitySDK::FromName("System.Runtime.Remoting.Channels", "ChannelServices")->GetStaticField(0x162B0);
		}

		static ::System::Collections::ArrayList** StaticGet_delayedClientChannels()
		{
			return (::System::Collections::ArrayList**)UnitySDK::FromName("System.Runtime.Remoting.Channels", "ChannelServices")->GetStaticField(0x162B8);
		}

		static ::System::Collections::ArrayList** StaticGet_registeredChannels()
		{
			return (::System::Collections::ArrayList**)UnitySDK::FromName("System.Runtime.Remoting.Channels", "ChannelServices")->GetStaticField(0x162C0);
		}

		static ::System::String** StaticGet_CrossContextUrl()
		{
			return (::System::String**)UnitySDK::FromName("System.Runtime.Remoting.Channels", "ChannelServices")->GetStaticField(0x162C8);
		}

		static ::System::Runtime::Remoting::Contexts::CrossContextChannel** StaticGet__crossContextSink()
		{
			return (::System::Runtime::Remoting::Contexts::CrossContextChannel**)UnitySDK::FromName("System.Runtime.Remoting.Channels", "ChannelServices")->GetStaticField(0x162D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel()
		{
			return ((::System::Runtime::Remoting::Contexts::CrossContextChannel*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GET_CROSSCONTEXTCHANNEL_OFFSET))();
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::String* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain_1(::System::Runtime::Remoting::Channels::IChannelSender* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3, ::System::String* a4)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET))(a1);
		}

		static ::System::Void RegisterChannel_1(::System::Runtime::Remoting::Channels::IChannel* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_1_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET))(a1);
		}

		static ::System::Object* CreateProvider(::System::Runtime::Remoting::ProviderData* a1)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::ReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessage* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Boolean(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_ISLOCALCALL_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Object*>* GetCurrentChannelInfo()
		{
			return ((::Il2CppArray<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET))();
		}

	};
}

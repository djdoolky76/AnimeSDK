#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ChatContext; }
namespace MiHoYo::SDK { class ChatMessage; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CHATCONTEXTMANAGER_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F553F90)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1F5544A0)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F554440)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F554180)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F554230)
#define MIHOYO_SDK_CHATCONTEXTMANAGER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F553D60)
#define MIHOYO_SDK_CHATCONTEXTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5545A0)
#define MIHOYO_SDK_CHATCONTEXTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F554510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChatContextManager_TypeDefinitionIndex = 35603;

	class ChatContextManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ChatContextManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ChatContextManager**)Il2CppClass::FromTypeDefinitionIndex(ChatContextManager_TypeDefinitionIndex)->GetStaticField(0x2ACD0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ChatContext*>* _contexts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetContext(::System::String* sceneId, ::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>* messages, ::System::Int32 maxContextSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_SETCONTEXT_OFFSET))(this, sceneId, messages, maxContextSize);
		}

		::System::Void AddMessage(::System::String* sceneId, ::MiHoYo::SDK::ChatMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ChatMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_ADDMESSAGE_OFFSET))(this, sceneId, message);
		}

		::MiHoYo::SDK::ChatContext* GetContext(::System::String* sceneId)
		{
			return ((::MiHoYo::SDK::ChatContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_GETCONTEXT_OFFSET))(this, sceneId);
		}

		::MiHoYo::SDK::ChatMessage* GetMessage(::System::String* sceneId, ::System::String* uidTimeMd5)
		{
			return ((::MiHoYo::SDK::ChatMessage*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_GETMESSAGE_OFFSET))(this, sceneId, uidTimeMd5);
		}

		::System::Void ClearContext(::System::String* sceneId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARCONTEXT_OFFSET))(this, sceneId);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXTMANAGER_CLEARALL_OFFSET))(this);
		}
	};
}

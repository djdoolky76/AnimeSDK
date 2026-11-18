#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ChatMessage; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CHATCONTEXT_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D51FFF0)
#define MIHOYO_SDK_CHATCONTEXT_GET_MAXCONTEXTSIZE_OFFSET UNITYSDK_OFFSET(0x1D51FF40)
#define MIHOYO_SDK_CHATCONTEXT_GET_MESSAGES_OFFSET UNITYSDK_OFFSET(0x1D51FF20)
#define MIHOYO_SDK_CHATCONTEXT_GET_SCENEID_OFFSET UNITYSDK_OFFSET(0x1D51FF00)
#define MIHOYO_SDK_CHATCONTEXT_SET_MAXCONTEXTSIZE_OFFSET UNITYSDK_OFFSET(0x1D51FF50)
#define MIHOYO_SDK_CHATCONTEXT_SET_MESSAGES_OFFSET UNITYSDK_OFFSET(0x1D51FF30)
#define MIHOYO_SDK_CHATCONTEXT_SET_SCENEID_OFFSET UNITYSDK_OFFSET(0x1D51FF10)
#define MIHOYO_SDK_CHATCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51FF60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChatContext_TypeDefinitionIndex = 35602;

	class ChatContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>* _Messages_k__BackingField; // 0x10
		::System::String* _SceneId_k__BackingField; // 0x18
		::System::Int32 _MaxContextSize_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* get_SceneId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_GET_SCENEID_OFFSET))(this);
		}

		::System::Void set_SceneId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_SET_SCENEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>* get_Messages()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_GET_MESSAGES_OFFSET))(this);
		}

		::System::Void set_Messages(::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::ChatMessage*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_SET_MESSAGES_OFFSET))(this, value);
		}

		::System::Int32 get_MaxContextSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_GET_MAXCONTEXTSIZE_OFFSET))(this);
		}

		::System::Void set_MaxContextSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_SET_MAXCONTEXTSIZE_OFFSET))(this, value);
		}

		::System::Void AddMessage(::MiHoYo::SDK::ChatMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ChatMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATCONTEXT_ADDMESSAGE_OFFSET))(this, message);
		}
	};
}

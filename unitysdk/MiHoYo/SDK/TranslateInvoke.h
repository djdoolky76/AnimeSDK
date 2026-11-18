#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATEINVOKE_ONFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EF49A60)
#define MIHOYO_SDK_TRANSLATEINVOKE_ONSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EF4AAD0)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_ADD_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1EF49FD0)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_CLEAR_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1EF4A810)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_INIT_OFFSET UNITYSDK_OFFSET(0x1EF49970)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1EF49C60)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1EF4A2A0)
#define MIHOYO_SDK_TRANSLATEINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4ACC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateInvoke_TypeDefinitionIndex = 35605;

	class TranslateInvoke : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE__CTOR_OFFSET))(this);
		}

		static ::System::Void translate_init(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_INIT_OFFSET))(args, callback);
		}

		static ::System::Void translate_set_context(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_SET_CONTEXT_OFFSET))(args, callback);
		}

		static ::System::Void translate_add_message(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_ADD_MESSAGE_OFFSET))(args, callback);
		}

		static ::System::Void translate_translate(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_TRANSLATE_OFFSET))(args, callback);
		}

		static ::System::Void translate_clear_context(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_CLEAR_CONTEXT_OFFSET))(args, callback);
		}

		static ::System::Void OnSuccessCallback(::System::Action_1<::System::String*>* callback, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_ONSUCCESSCALLBACK_OFFSET))(callback, message);
		}

		static ::System::Void OnFailCallback(::System::Action_1<::System::String*>* callback, ::System::Int32 errorCode, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_ONFAILCALLBACK_OFFSET))(callback, errorCode, message);
		}
	};
}

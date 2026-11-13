#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATEINVOKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD35580)
#define MIHOYO_SDK_TRANSLATEINVOKE_ONFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD32CB0)
#define MIHOYO_SDK_TRANSLATEINVOKE_ONSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD35460)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_ADD_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1DD33740)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_CLEAR_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DD34FC0)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD32900)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DD32DD0)
#define MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1DD33CB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateInvoke_TypeDefinitionIndex = 47609;

	class TranslateInvoke : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_CTOR_OFFSET))(this);
		}

		static ::System::Void translate_init(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void translate_set_context(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_SET_CONTEXT_OFFSET))(a1, a2);
		}

		static ::System::Void translate_add_message(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_ADD_MESSAGE_OFFSET))(a1, a2);
		}

		static ::System::Void translate_translate(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_TRANSLATE_OFFSET))(a1, a2);
		}

		static ::System::Void translate_clear_context(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_TRANSLATE_CLEAR_CONTEXT_OFFSET))(a1, a2);
		}

		static ::System::Void OnSuccessCallback(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_ONSUCCESSCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnFailCallback(::System::Action_1<::System::String*>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATEINVOKE_ONFAILCALLBACK_OFFSET))(a1, a2, a3);
		}

	};
}

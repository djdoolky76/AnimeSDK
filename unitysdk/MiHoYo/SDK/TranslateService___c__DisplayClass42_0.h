#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ChatMessage; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class TranslateService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EFEC0)
#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__TRANSLATE_B__0_OFFSET UNITYSDK_OFFSET(0x1F0F13A0)
#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__TRANSLATE_B__1_OFFSET UNITYSDK_OFFSET(0x1F0F14D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService___c__DisplayClass42_0_TypeDefinitionIndex = 35608;

	class TranslateService___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* targetLanguage; // 0x18
		::MiHoYo::SDK::ChatMessage* msg; // 0x20
		::MiHoYo::SDK::TranslateService* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _Translate_b__0(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__TRANSLATE_B__0_OFFSET))(this, data);
		}

		::System::Void _Translate_b__1(::System::Int32 errorCode, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS42_0__TRANSLATE_B__1_OFFSET))(this, errorCode, errorMsg);
		}
	};
}

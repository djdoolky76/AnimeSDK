#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Text { class EncoderFallback; }

#define SYSTEM_TEXT_ENCODERFALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C83B0)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C8C8CA0)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1C8C8B60)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C8C74C0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallback_TypeDefinitionIndex = 484;

	class EncoderFallback : public ::System::Object
	{
	public:
		::System::Boolean bIsMicrosoftBestFitFallback; // 0x10
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Text", "EncoderFallback")->GetStaticField(0x15B70);
		}

		static ::System::Text::EncoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::EncoderFallback**)UnitySDK::FromName("System.Text", "EncoderFallback")->GetStaticField(0x15B78);
		}

		static ::System::Text::EncoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::EncoderFallback**)UnitySDK::FromName("System.Text", "EncoderFallback")->GetStaticField(0x15B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Text::EncoderFallback* get_ReplacementFallback()
		{
			return ((::System::Text::EncoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))();
		}

		static ::System::Text::EncoderFallback* get_ExceptionFallback()
		{
			return ((::System::Text::EncoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))();
		}

	};
}

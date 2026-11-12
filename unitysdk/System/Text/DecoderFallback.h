#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Text { class DecoderFallback; }

#define SYSTEM_TEXT_DECODERFALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29B0B0)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x1D29B5F0)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1D29B5A0)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1D297680)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallback_TypeDefinitionIndex = 473;

	class DecoderFallback : public ::System::Object
	{
	public:
		::System::Boolean bIsMicrosoftBestFitFallback; // 0x10
		static ::System::Text::DecoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::DecoderFallback**)UnitySDK::FromName("System.Text", "DecoderFallback")->GetStaticField(0x20560);
		}

		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Text", "DecoderFallback")->GetStaticField(0x20568);
		}

		static ::System::Text::DecoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::DecoderFallback**)UnitySDK::FromName("System.Text", "DecoderFallback")->GetStaticField(0x20570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Text::DecoderFallback* get_ReplacementFallback()
		{
			return ((::System::Text::DecoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))();
		}

		static ::System::Text::DecoderFallback* get_ExceptionFallback()
		{
			return ((::System::Text::DecoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))();
		}

	};
}

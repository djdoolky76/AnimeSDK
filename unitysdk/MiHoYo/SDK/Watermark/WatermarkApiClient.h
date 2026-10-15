#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C017650)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_DOWNLOADWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1C0175D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_REQUESTWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x1C017540)

namespace MiHoYo::SDK::Watermark
{
	class WatermarkApiClient : public ::System::Object
	{
	public:
		// static const ::System::Object REQUEST_TIMEOUT_SECONDS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* RequestWatermarkInfo(::MiHoYo::SDK::Watermark::WatermarkRequest* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action* a3, ::System::Action* a4, ::System::Single a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MiHoYo::SDK::Watermark::WatermarkRequest*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_REQUESTWATERMARKINFO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::IEnumerator* DownloadWatermarkImage(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKAPICLIENT_DOWNLOADWATERMARKIMAGE_OFFSET))(a1, a2, a3, a4);
		}

	};
}

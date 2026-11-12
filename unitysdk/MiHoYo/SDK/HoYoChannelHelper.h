#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E9B60)
#define MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET UNITYSDK_OFFSET(0xB5E3820)
#define MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET UNITYSDK_OFFSET(0xB5E3610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelHelper_TypeDefinitionIndex = 47549;

	class HoYoChannelHelper : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_requestIdLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelHelper")->GetStaticField(0x1BFD0);
		}

		static ::System::Int64* StaticGet_s_requestIdCounter()
		{
			return (::System::Int64*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelHelper")->GetStaticField(0x5BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_CCTOR_OFFSET))();
		}

		static ::System::String* GenerateRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET))(a1);
		}

		static ::System::String* ExtractRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET))(a1);
		}

	};
}

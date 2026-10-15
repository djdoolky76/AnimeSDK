#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCNETWORK_RESPONSEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0652A0)

namespace MiHoYo::SDK
{
	class UGCNetwork_ResponseModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x10
		::System::Int32 retcode; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCNETWORK_RESPONSEMODEL_CTOR_OFFSET))(this);
		}

	};
}

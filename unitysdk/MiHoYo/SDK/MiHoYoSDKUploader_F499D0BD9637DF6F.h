#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKUploader; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F499D0BD9637DF6F_ED3D965305E5616A_OFFSET UNITYSDK_OFFSET(0x295FA70)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F499D0BD9637DF6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader_F499D0BD9637DF6F_TypeDefinitionIndex = 15420;

	class MiHoYoSDKUploader_F499D0BD9637DF6F : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKUploader* A544919C800E2923; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F499D0BD9637DF6F__CTOR_OFFSET))(this);
		}

		::System::Void ED3D965305E5616A(::System::String* A9B0E744486424C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F499D0BD9637DF6F_ED3D965305E5616A_OFFSET))(this, A9B0E744486424C1);
		}
	};
}

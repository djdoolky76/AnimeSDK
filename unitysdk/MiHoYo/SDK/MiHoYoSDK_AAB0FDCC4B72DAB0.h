#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDK_AAB0FDCC4B72DAB0_E523DB9ECAE31040_OFFSET UNITYSDK_OFFSET(0x29457F0)
#define MIHOYO_SDK_MIHOYOSDK_AAB0FDCC4B72DAB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_AAB0FDCC4B72DAB0_TypeDefinitionIndex = 15380;

	class MiHoYoSDK_AAB0FDCC4B72DAB0 : public ::System::Object
	{
	public:
		::System::String* E2692EDB678DEB5F; // 0x10
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AAB0FDCC4B72DAB0__CTOR_OFFSET))(this);
		}

		::System::Void E523DB9ECAE31040(::System::String* A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AAB0FDCC4B72DAB0_E523DB9ECAE31040_OFFSET))(this, A6CAE7339066B0FB);
		}
	};
}

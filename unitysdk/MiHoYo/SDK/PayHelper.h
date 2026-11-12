#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }

#define MIHOYO_SDK_PAYHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1082F0)
#define MIHOYO_SDK_PAYHELPER_SUPPORTARBITRAYPARAMINCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1D107FB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayHelper_TypeDefinitionIndex = 8033;

	class PayHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYHELPER_CTOR_OFFSET))(this);
		}

		static ::System::Void SupportArbitrayParamInCreateOrder(::MiHoYo::SDK::JSONObject* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYHELPER_SUPPORTARBITRAYPARAMINCREATEORDER_OFFSET))(a1, a2);
		}

	};
}

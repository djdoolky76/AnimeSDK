#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_NETWORKRESPONSEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C33F720)
#define MIHOYO_SDK_NETWORKRESPONSEMODEL_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x1C344750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkResponseModel_TypeDefinitionIndex = 8186;

	class NetworkResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::MiHoYo::SDK::JSONNode* data; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODEL_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* ToJSONObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODEL_TOJSONOBJECT_OFFSET))(this);
		}

	};
}

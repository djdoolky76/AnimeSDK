#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_UGCINTERFACE_UGCBINARYRESPONSEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3BEC0)
#define MIHOYO_SDK_UGCINTERFACE_UGCBINARYRESPONSEMODEL_TOJSON_OFFSET UNITYSDK_OFFSET(0x1DD3EE50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_UgcBinaryResponseModel_TypeDefinitionIndex = 47460;

	class UGCInterface_UgcBinaryResponseModel : public ::System::Object
	{
	public:
		::System::String* task_id; // 0x10
		::System::Int32 error_code; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x20
		::Il2CppArray<::System::Byte>* data; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UGCBINARYRESPONSEMODEL_CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UGCBINARYRESPONSEMODEL_TOJSON_OFFSET))(this);
		}

	};
}

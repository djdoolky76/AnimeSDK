#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF1F00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF1F40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1BBF1F50)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location___c_TypeDefinitionIndex = 35813;

	class SourceCodeInfo_Types_Location___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x5F4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location* __cctor_b__44_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
}

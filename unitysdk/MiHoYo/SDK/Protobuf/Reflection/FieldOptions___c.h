#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD87D70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD87DB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x1CD87DC0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions___c_TypeDefinitionIndex = 36722;

	class FieldOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x5DA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* __cctor_b__55_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS___C___CCTOR_B__55_0_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8FA60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8FAA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__95_0_OFFSET UNITYSDK_OFFSET(0x1CD8FAB0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileOptions___c_TypeDefinitionIndex = 36715;

	class FileOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x5E2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileOptions* __cctor_b__95_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEOPTIONS___C___CCTOR_B__95_0_OFFSET))(this);
		}

	};
}

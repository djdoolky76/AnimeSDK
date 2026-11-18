#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEB5910)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEB5950)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1FEB5960)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions___c_TypeDefinitionIndex = 28578;

	class EnumOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions___c_TypeDefinitionIndex)->GetStaticField(0x25A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__34_0_OFFSET))(this);
		}
	};
}

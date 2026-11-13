#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Enum; }
namespace System { class String; }

#define MIHOYO_SDK_DESCRIPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB13DC0)
#define MIHOYO_SDK_DESCRIPTION_GETFROM_OFFSET UNITYSDK_OFFSET(0x1AB13DD0)
#define MIHOYO_SDK_DESCRIPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AB13DA0)
#define MIHOYO_SDK_DESCRIPTION_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1AB13DB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Description_TypeDefinitionIndex = 47336;

	class Description : public ::System::Attribute
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_SET_TEXT_OFFSET))(this, a1);
		}

		static ::System::String* GetFrom(::System::Enum* a1)
		{
			return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DESCRIPTION_GETFROM_OFFSET))(a1);
		}

	};
}

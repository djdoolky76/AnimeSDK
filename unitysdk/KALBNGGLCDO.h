#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define KALBNGGLCDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC4D7D0)
#define KALBNGGLCDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4D7C0)
#define KALBNGGLCDO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EC4D7E0)

inline static constexpr unsigned int KALBNGGLCDO_TypeDefinitionIndex = 44279;

	class KALBNGGLCDO : public ::System::Attribute
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALBNGGLCDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KALBNGGLCDO_CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KALBNGGLCDO_GET_ID_OFFSET))(this);
		}

	};

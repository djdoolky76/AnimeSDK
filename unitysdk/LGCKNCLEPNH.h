#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define LGCKNCLEPNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB68F690)
#define LGCKNCLEPNH_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0xB68F680)

inline static constexpr unsigned int LGCKNCLEPNH_TypeDefinitionIndex = 49033;

	class LGCKNCLEPNH : public ::System::Attribute
	{
	public:
		::System::Type* _LightType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LGCKNCLEPNH_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_LightType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCKNCLEPNH_GET_LIGHTTYPE_OFFSET))(this);
		}

	};

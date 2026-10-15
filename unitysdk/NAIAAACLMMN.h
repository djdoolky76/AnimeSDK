#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define NAIAAACLMMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9BB30)
#define NAIAAACLMMN_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xBA9BB40)

inline static constexpr unsigned int NAIAAACLMMN_TypeDefinitionIndex = 82140;

	class NAIAAACLMMN : public ::System::Attribute
	{
	public:
		::System::Type* _ConfigType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NAIAAACLMMN_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ConfigType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIAAACLMMN_GET_CONFIGTYPE_OFFSET))(this);
		}

	};

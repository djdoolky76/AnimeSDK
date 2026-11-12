#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define NGIMBCAPKDF_CTOR_OFFSET UNITYSDK_OFFSET(0xC4855B0)
#define NGIMBCAPKDF_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xC4855C0)

inline static constexpr unsigned int NGIMBCAPKDF_TypeDefinitionIndex = 85029;

	class NGIMBCAPKDF : public ::System::Attribute
	{
	public:
		::System::Type* _ConfigType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NGIMBCAPKDF_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ConfigType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIMBCAPKDF_GET_CONFIGTYPE_OFFSET))(this);
		}

	};

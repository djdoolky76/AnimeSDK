#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define CDAGGNMDJKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC75E930)
#define CDAGGNMDJKN_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xC75E940)

	class CDAGGNMDJKN : public ::System::Attribute
	{
	public:
		::System::Type* _ConfigType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CDAGGNMDJKN_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ConfigType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDAGGNMDJKN_GET_CONFIGTYPE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBJANKHLNGO_FJNMMPJPPPE.h"
namespace System { class Type; }

#define OBJANKHLNGO_EIAFKDJNMAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5D250)
#define OBJANKHLNGO_EIAFKDJNMAC_GET_IDTYPE_OFFSET UNITYSDK_OFFSET(0x1EC5D1F0)
#define OBJANKHLNGO_EIAFKDJNMAC_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1EC5D1E0)
#define OBJANKHLNGO_EIAFKDJNMAC_HCLODOEGKGI_OFFSET UNITYSDK_OFFSET(0x1EC5D2C0)

inline static constexpr unsigned int OBJANKHLNGO_EIAFKDJNMAC_TypeDefinitionIndex = 44267;

	class OBJANKHLNGO_EIAFKDJNMAC
	{
	public:
		::System::Type* _MessageType_k__BackingField; // 0x48
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + OBJANKHLNGO_EIAFKDJNMAC_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_MessageType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_EIAFKDJNMAC_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Type* get_IdType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_EIAFKDJNMAC_GET_IDTYPE_OFFSET))(this);
		}

		::System::Boolean HCLODOEGKGI(::OBJANKHLNGO_FJNMMPJPPPE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBJANKHLNGO_FJNMMPJPPPE))((::PBYTE)hIl2Cpp + OBJANKHLNGO_EIAFKDJNMAC_HCLODOEGKGI_OFFSET))(this, a1);
		}

	};

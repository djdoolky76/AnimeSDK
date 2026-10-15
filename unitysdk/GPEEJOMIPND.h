#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define GPEEJOMIPND_CTOR_OFFSET UNITYSDK_OFFSET(0x15B46BD0)
#define GPEEJOMIPND_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x15B46BB0)
#define GPEEJOMIPND_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x15B46BC0)

inline static constexpr unsigned int GPEEJOMIPND_TypeDefinitionIndex = 49332;

	class GPEEJOMIPND : public ::System::Attribute
	{
	public:
		::System::Type* _TargetType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GPEEJOMIPND_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEEJOMIPND_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Void set_TargetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GPEEJOMIPND_SET_TARGETTYPE_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define MFIAGMDJIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74AF50)

	class MFIAGMDJIBP : public ::System::Attribute
	{
	public:
		::System::Type* INPHNGEKLBL; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MFIAGMDJIBP_CTOR_OFFSET))(this, a1);
		}

	};

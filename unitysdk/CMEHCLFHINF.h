#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define CMEHCLFHINF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C454DF0)

	class CMEHCLFHINF : public ::System::Attribute
	{
	public:
		::System::Type* BHAKECCMHAB; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CMEHCLFHINF_CTOR_OFFSET))(this, a1);
		}

	};

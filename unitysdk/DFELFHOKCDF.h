#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DFELFHOKCDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE75A0)

inline static constexpr unsigned int DFELFHOKCDF_TypeDefinitionIndex = 24995;

	class DFELFHOKCDF : public ::System::Attribute
	{
	public:
		::System::Boolean NIAEJLPMGBH; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFELFHOKCDF_CTOR_OFFSET))(this, a1);
		}

	};

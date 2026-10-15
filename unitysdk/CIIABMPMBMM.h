#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CIIABMPMBMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2CC0)

	class CIIABMPMBMM : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIABMPMBMM_CTOR_OFFSET))(this);
		}

	};

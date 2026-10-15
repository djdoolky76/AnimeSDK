#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDJMFENLDJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C748B70)

	class MDJMFENLDJL : public ::System::Object
	{
	public:
		::System::UInt64 AICKGOAFPPB; // 0x10
		::System::UInt32 JDGGFABIPDF; // 0x18
		::System::Boolean CCCKAJHEFNP; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IMKHIDEBGEB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMFENLDJL_CTOR_OFFSET))(this);
		}

	};

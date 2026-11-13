#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHLDHMFKOCP_FHMFJBMKDMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E7BC0)

inline static constexpr unsigned int KHLDHMFKOCP_FHMFJBMKDMN_TypeDefinitionIndex = 44050;

	class KHLDHMFKOCP_FHMFJBMKDMN : public ::System::Object
	{
	public:
		::System::Boolean BHCLAFHOEAO; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 IPKMALEADMB; // 0x14
		::System::UInt32 FDKPCNBCGEG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP_FHMFJBMKDMN_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIIFBBCPKAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1579DB80)

inline static constexpr unsigned int FIIFBBCPKAL_TypeDefinitionIndex = 57948;

	class FIIFBBCPKAL : public ::System::Object
	{
	public:
		::System::UInt32 OJOFCAECDHC; // 0x10
		::System::UInt32 CGLEPDDLJDE; // 0x14
		::System::UInt32 GLMMBFGFMHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIFBBCPKAL_CTOR_OFFSET))(this);
		}

	};

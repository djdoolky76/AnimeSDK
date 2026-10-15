#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBAEIACKKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E5AD0)

inline static constexpr unsigned int DBAEIACKKJP_TypeDefinitionIndex = 42134;

	class DBAEIACKKJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAEIACKKJP_CTOR_OFFSET))(this);
		}

	};

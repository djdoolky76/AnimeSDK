#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEOIKBMIIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8BFF0)

inline static constexpr unsigned int HEOIKBMIIBP_TypeDefinitionIndex = 44763;

	class HEOIKBMIIBP : public ::System::Object
	{
	public:
		::System::Int32 ICFPIMEELGJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOIKBMIIBP_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define FCFNFMPIEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C013AE0)

inline static constexpr unsigned int FCFNFMPIEFJ_TypeDefinitionIndex = 83357;

	class FCFNFMPIEFJ : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + FCFNFMPIEFJ_CTOR_OFFSET))(this, a1);
		}

	};

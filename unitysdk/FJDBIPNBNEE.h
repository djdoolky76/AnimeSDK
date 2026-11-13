#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FJDBIPNBNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x19821650)
#define FJDBIPNBNEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19821610)

inline static constexpr unsigned int FJDBIPNBNEE_TypeDefinitionIndex = 81523;

	class FJDBIPNBNEE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDBIPNBNEE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDBIPNBNEE_DISPOSE_OFFSET))(this);
		}

	};

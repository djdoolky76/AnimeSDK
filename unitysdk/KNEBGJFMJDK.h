#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNEBGJFMJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635400)

inline static constexpr unsigned int KNEBGJFMJDK_TypeDefinitionIndex = 43111;

	class KNEBGJFMJDK : public ::System::Object
	{
	public:
		::System::Int32 BONJIMJLEMD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEBGJFMJDK_CTOR_OFFSET))(this);
		}

	};

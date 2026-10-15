#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMACCEFONDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA3370)

inline static constexpr unsigned int JMACCEFONDA_TypeDefinitionIndex = 42542;

	class JMACCEFONDA : public ::System::Object
	{
	public:
		::System::Boolean LEAPLOPHAHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMACCEFONDA_CTOR_OFFSET))(this);
		}

	};

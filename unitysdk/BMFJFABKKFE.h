#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BMFJFABKKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1702E730)

inline static constexpr unsigned int BMFJFABKKFE_TypeDefinitionIndex = 38102;

	class BMFJFABKKFE : public ::System::Object
	{
	public:
		::System::UInt32 FBINCMPIKHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJFABKKFE_CTOR_OFFSET))(this);
		}

	};

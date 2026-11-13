#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHNBJKCEKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4D80)

inline static constexpr unsigned int HHNBJKCEKAH_TypeDefinitionIndex = 42969;

	class HHNBJKCEKAH : public ::System::Object
	{
	public:
		::System::Boolean KGLNGMIEPLK; // 0x10
		::System::Boolean MBJJADMHFNG; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBJKCEKAH_CTOR_OFFSET))(this);
		}

	};

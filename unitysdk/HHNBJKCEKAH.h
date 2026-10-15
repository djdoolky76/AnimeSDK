#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHNBJKCEKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9DD00)

inline static constexpr unsigned int HHNBJKCEKAH_TypeDefinitionIndex = 41994;

	class HHNBJKCEKAH : public ::System::Object
	{
	public:
		::System::Boolean MBJJADMHFNG; // 0x10
		::System::Boolean KGLNGMIEPLK; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBJKCEKAH_CTOR_OFFSET))(this);
		}

	};

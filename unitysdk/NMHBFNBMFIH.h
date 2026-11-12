#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMHBFNBMFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB34B70)

inline static constexpr unsigned int NMHBFNBMFIH_TypeDefinitionIndex = 42962;

	class NMHBFNBMFIH : public ::System::Object
	{
	public:
		::System::Boolean FHHPOLAMHDB; // 0x10
		::System::Boolean PIFAKJFLGFH; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 PJJDMBCIBDM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHBFNBMFIH_CTOR_OFFSET))(this);
		}

	};

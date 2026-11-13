#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFOPKDMHOME_CTOR_OFFSET UNITYSDK_OFFSET(0x1A34B6E0)

inline static constexpr unsigned int EFOPKDMHOME_TypeDefinitionIndex = 79960;

	class EFOPKDMHOME : public ::System::Object
	{
	public:
		::System::Single PMHMEGEJDGP; // 0x10
		::System::Boolean PPELBJJJKMC; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single IIGNDDOOEGD; // 0x18
		::System::Single LDFAHNKNKOA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOPKDMHOME_CTOR_OFFSET))(this);
		}

	};

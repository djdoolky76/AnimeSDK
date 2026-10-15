#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define BLLCHHIMKCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C0400)

inline static constexpr unsigned int BLLCHHIMKCJ_TypeDefinitionIndex = 36563;

	class BLLCHHIMKCJ : public ::System::Object
	{
	public:
		::System::Single JGBLHPBKIFP; // 0x10
		::System::Boolean GECBBOEPHFC; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::MVector3 DPKMOFJOHKB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCHHIMKCJ_CTOR_OFFSET))(this);
		}

	};

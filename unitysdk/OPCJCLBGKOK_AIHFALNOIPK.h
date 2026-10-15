#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OPCJCLBGKOK_AIHFALNOIPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9DED0)

inline static constexpr unsigned int OPCJCLBGKOK_AIHFALNOIPK_TypeDefinitionIndex = 71913;

	class OPCJCLBGKOK_AIHFALNOIPK : public ::System::Object
	{
	public:
		::System::Int32 BCCKPCDKGOI; // 0x10
		::System::Boolean GNDCCBNILML; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 PGHKIPAOOKC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_AIHFALNOIPK_CTOR_OFFSET))(this);
		}

	};

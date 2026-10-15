#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJNMNEGFJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C590870)

inline static constexpr unsigned int BJNMNEGFJKA_TypeDefinitionIndex = 37170;

	class BJNMNEGFJKA : public ::System::Object
	{
	public:
		::System::Int32 OFKGNDMDFNC; // 0x10
		::System::Int32 IFNHEOBGPEL; // 0x14
		::System::Int32 NCMMPGOLMDK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNMNEGFJKA_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNGHAMCELFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C706A50)

inline static constexpr unsigned int JNGHAMCELFP_TypeDefinitionIndex = 36459;

	class JNGHAMCELFP : public ::System::Object
	{
	public:
		::System::UInt32 JCKBFHAANHB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGHAMCELFP_CTOR_OFFSET))(this);
		}

	};

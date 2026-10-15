#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EIIAHKLHBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154BFF20)

inline static constexpr unsigned int EIIAHKLHBKJ_TypeDefinitionIndex = 55169;

	class EIIAHKLHBKJ : public ::System::Object
	{
	public:
		::System::UInt32 CEGOPEIKDLA; // 0x10
		::System::Int32 HBPKFLEFGLO; // 0x14
		::System::Int32 KMEENNAGHCE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIAHKLHBKJ_CTOR_OFFSET))(this);
		}

	};

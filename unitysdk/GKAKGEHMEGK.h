#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKAKGEHMEGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA52850)

inline static constexpr unsigned int GKAKGEHMEGK_TypeDefinitionIndex = 37367;

	class GKAKGEHMEGK : public ::System::Object
	{
	public:
		::System::Int32 JGLNCOJIIHA; // 0x10
		::System::Int32 PHJOMOGJHIF; // 0x14
		::System::UInt32 ADFAKNJIAPJ; // 0x18
		::System::Int32 IMKHIDEBGEB; // 0x1C
		::System::UInt32 FECDAFJNJDK; // 0x20
		::System::Int32 LLHGINIFMLL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAKGEHMEGK_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGCHGCICEBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A6AB0)

inline static constexpr unsigned int IGCHGCICEBA_TypeDefinitionIndex = 36468;

	class IGCHGCICEBA : public ::System::Object
	{
	public:
		::System::Int32 IMKHIDEBGEB; // 0x10
		::System::Int32 LLHGINIFMLL; // 0x14
		::System::Int32 PHJOMOGJHIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHGCICEBA_CTOR_OFFSET))(this);
		}

	};

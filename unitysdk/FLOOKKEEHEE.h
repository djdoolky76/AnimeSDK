#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAGAHJEDCHF.h"

#define FLOOKKEEHEE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA42DB0)
#define FLOOKKEEHEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA42E00)

inline static constexpr unsigned int FLOOKKEEHEE_TypeDefinitionIndex = 43487;

	class FLOOKKEEHEE : public ::HAGAHJEDCHF
	{
	public:
		::System::Int32 BGCALJDKEDM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOOKKEEHEE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOOKKEEHEE_CLEAR_OFFSET))(this);
		}

	};

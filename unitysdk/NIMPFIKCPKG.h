#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIMPFIKCPKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF7E90)
#define NIMPFIKCPKG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBBF7E50)

inline static constexpr unsigned int NIMPFIKCPKG_TypeDefinitionIndex = 57390;

	class NIMPFIKCPKG : public ::System::Object
	{
	public:
		::System::Boolean GOJIPKNKOBD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMPFIKCPKG_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMPFIKCPKG_KHGIKBFDLFB_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPFEGNEJDA;

#define PBDJKHDICCI___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBFDD9D0)
#define PBDJKHDICCI___C__DISPLAYCLASS1_0__GETPIXAIREQUIPPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0xBFDD9F0)

inline static constexpr unsigned int PBDJKHDICCI___c__DisplayClass1_0_TypeDefinitionIndex = 79213;

	class PBDJKHDICCI___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 UID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJKHDICCI___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPixAirEquipProperty_b__0(::FFPFEGNEJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFPFEGNEJDA*))((::PBYTE)hIl2Cpp + PBDJKHDICCI___C__DISPLAYCLASS1_0__GETPIXAIREQUIPPROPERTY_B__0_OFFSET))(this, a1);
		}

	};

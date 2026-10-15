#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEPJLKLBKPL___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F1770)
#define CEPJLKLBKPL___C__DISPLAYCLASS4_0__ISBLINDBOXPETBYID_B__0_OFFSET UNITYSDK_OFFSET(0xC9F18A0)

inline static constexpr unsigned int CEPJLKLBKPL___c__DisplayClass4_0_TypeDefinitionIndex = 75677;

	class CEPJLKLBKPL___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 petId; // 0x10
		::System::Boolean found; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPJLKLBKPL___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsBlindBoxPetById_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEPJLKLBKPL___C__DISPLAYCLASS4_0__ISBLINDBOXPETBYID_B__0_OFFSET))(this, a1);
		}

	};

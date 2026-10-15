#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEPJLKLBKPL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F1690)
#define CEPJLKLBKPL___C__DISPLAYCLASS3_0__ISNORMALPETBYID_B__0_OFFSET UNITYSDK_OFFSET(0xC9F1880)

inline static constexpr unsigned int CEPJLKLBKPL___c__DisplayClass3_0_TypeDefinitionIndex = 75676;

	class CEPJLKLBKPL___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Boolean found; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 petId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPJLKLBKPL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsNormalPetById_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEPJLKLBKPL___C__DISPLAYCLASS3_0__ISNORMALPETBYID_B__0_OFFSET))(this, a1);
		}

	};

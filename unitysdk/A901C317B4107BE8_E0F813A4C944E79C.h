#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/System/Object.h"

class E945252ECE50FE4E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A901C317B4107BE8_E0F813A4C944E79C_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x1C6DBB0)
#define A901C317B4107BE8_E0F813A4C944E79C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A901C317B4107BE8_E0F813A4C944E79C_TypeDefinitionIndex = 9616;

class A901C317B4107BE8_E0F813A4C944E79C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::E945252ECE50FE4E*>* EB4D6901FF1413DA; // 0x10
	::AD41610DAE684581 F65679E7052623F3; // 0x18
	::AD41610DAE684581 B313F459F2AA6214; // 0x30

	::System::Int32 BCB0A4DD6EA3B4C9(::System::Collections::Generic::List_1<::E945252ECE50FE4E*>* B35BBBE7E39341A2, ::System::Collections::Generic::List_1<::E945252ECE50FE4E*>* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::E945252ECE50FE4E*>*, ::System::Collections::Generic::List_1<::E945252ECE50FE4E*>*))((::PBYTE)hIl2Cpp + A901C317B4107BE8_E0F813A4C944E79C_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A901C317B4107BE8_E0F813A4C944E79C__CTOR_OFFSET))(this);
	}
};

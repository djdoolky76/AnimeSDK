#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B611DB0AB1B594D1.h"
#include "unitysdk/System/Object.h"

class AkAmbient;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A25EFB48A9145290_E3DB696D9E5E422B_OFFSET UNITYSDK_OFFSET(0x291ADC0)
#define A25EFB48A9145290__CTOR_OFFSET UNITYSDK_OFFSET(0x291ADD0)

inline static constexpr unsigned int A25EFB48A9145290_TypeDefinitionIndex = 20462;

class A25EFB48A9145290 : public ::System::Object
{
public:
	::System::Boolean B19B92FF518FE62B; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::AkAmbient*>* B9B26B23B27A46C7; // 0x18

	::System::Void E3DB696D9E5E422B(::System::Object* F4860F6B04C593FA, ::B611DB0AB1B594D1 F8CA7D21DC4D02B8, ::System::Object* AD79F219B802C145)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::B611DB0AB1B594D1, ::System::Object*))((::PBYTE)hIl2Cpp + A25EFB48A9145290_E3DB696D9E5E422B_OFFSET))(this, F4860F6B04C593FA, F8CA7D21DC4D02B8, AD79F219B802C145);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A25EFB48A9145290__CTOR_OFFSET))(this);
	}
};

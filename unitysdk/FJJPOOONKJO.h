#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define FJJPOOONKJO_CTOR_OFFSET UNITYSDK_OFFSET(0x157C6880)
#define FJJPOOONKJO_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x157C6820)

inline static constexpr unsigned int FJJPOOONKJO_TypeDefinitionIndex = 61949;

	class FJJPOOONKJO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPOOONKJO_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + FJJPOOONKJO_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};

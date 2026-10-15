#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKGNKFKLIJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACB0)
#define BKGNKFKLIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC00)
#define BKGNKFKLIJK_EFIBEKOIKNC_OFFSET UNITYSDK_OFFSET(0x1AD30)
#define BKGNKFKLIJK_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1AE20)
#define BKGNKFKLIJK_MIBEDELCOED_OFFSET UNITYSDK_OFFSET(0x1ADC0)

inline static constexpr unsigned int BKGNKFKLIJK_TypeDefinitionIndex = 77767;

	struct alignas(8) BKGNKFKLIJK
	{
		::System::Collections::Generic::List_1<::System::UInt32>* MONFNEIPPIJ; // 0x10
		::System::Int32 EAKMDIMHMCF; // 0x18
		::System::Int32 NALMBOOCCIN; // 0x1C
		::System::Boolean DINHNFKMKBA; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BKGNKFKLIJK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BKGNKFKLIJK_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 EFIBEKOIKNC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGNKFKLIJK_EFIBEKOIKNC_OFFSET))(this);
		}

		::System::Void MIBEDELCOED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGNKFKLIJK_MIBEDELCOED_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGNKFKLIJK_HIDEJDELEEB_OFFSET))(this);
		}

	};

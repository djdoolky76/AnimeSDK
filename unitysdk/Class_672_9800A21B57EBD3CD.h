#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_672_9800A21B57EBD3CD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14966A00)
#define CLASS_672_9800A21B57EBD3CD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14966600)
#define CLASS_672_9800A21B57EBD3CD_METHOD_OFFSET UNITYSDK_OFFSET(0x14966C30)

inline static constexpr unsigned int Class_672_9800A21B57EBD3CD_TypeDefinitionIndex = 51007;

	class Class_672_9800A21B57EBD3CD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_672_9800A21B57EBD3CD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_672_9800A21B57EBD3CD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_672_9800A21B57EBD3CD_METHOD_2_OFFSET))(a1);
		}

	};

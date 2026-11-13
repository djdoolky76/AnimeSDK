#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_782_452847EE66CE5800_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB5EF70)
#define CLASS_782_452847EE66CE5800_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB5EB70)
#define CLASS_782_452847EE66CE5800_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB5F1C0)

inline static constexpr unsigned int Class_782_452847EE66CE5800_TypeDefinitionIndex = 52168;

	class Class_782_452847EE66CE5800 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_782_452847EE66CE5800_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_782_452847EE66CE5800_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_782_452847EE66CE5800_METHOD_2_OFFSET))(a1);
		}

	};

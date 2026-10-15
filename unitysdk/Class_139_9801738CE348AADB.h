#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_139_9801738CE348AADB_METHOD_1_OFFSET UNITYSDK_OFFSET(0xBB1E3D0)
#define CLASS_139_9801738CE348AADB_METHOD_2_OFFSET UNITYSDK_OFFSET(0xBB1DFA0)
#define CLASS_139_9801738CE348AADB_METHOD_OFFSET UNITYSDK_OFFSET(0xBB1E660)

inline static constexpr unsigned int Class_139_9801738CE348AADB_TypeDefinitionIndex = 50440;

	class Class_139_9801738CE348AADB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_139_9801738CE348AADB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_139_9801738CE348AADB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_139_9801738CE348AADB_METHOD_2_OFFSET))(a1);
		}

	};

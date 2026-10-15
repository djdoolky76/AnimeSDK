#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_900_9AF4E4D7FADA9356_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149CCA90)
#define CLASS_900_9AF4E4D7FADA9356_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149CC690)
#define CLASS_900_9AF4E4D7FADA9356_METHOD_OFFSET UNITYSDK_OFFSET(0x149CCCE0)

inline static constexpr unsigned int Class_900_9AF4E4D7FADA9356_TypeDefinitionIndex = 51235;

	class Class_900_9AF4E4D7FADA9356 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_900_9AF4E4D7FADA9356_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_900_9AF4E4D7FADA9356_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_900_9AF4E4D7FADA9356_METHOD_2_OFFSET))(a1);
		}

	};

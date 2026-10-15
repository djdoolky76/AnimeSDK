#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1340_12E42BBA81BF9A36_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14ADE930)
#define CLASS_1340_12E42BBA81BF9A36_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14ADE530)
#define CLASS_1340_12E42BBA81BF9A36_METHOD_OFFSET UNITYSDK_OFFSET(0x14ADEB60)

inline static constexpr unsigned int Class_1340_12E42BBA81BF9A36_TypeDefinitionIndex = 51678;

	class Class_1340_12E42BBA81BF9A36 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1340_12E42BBA81BF9A36_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1340_12E42BBA81BF9A36_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1340_12E42BBA81BF9A36_METHOD_2_OFFSET))(a1);
		}

	};

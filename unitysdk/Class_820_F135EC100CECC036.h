#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_820_F135EC100CECC036_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A1430)
#define CLASS_820_F135EC100CECC036_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A1030)
#define CLASS_820_F135EC100CECC036_METHOD_OFFSET UNITYSDK_OFFSET(0x149A1680)

inline static constexpr unsigned int Class_820_F135EC100CECC036_TypeDefinitionIndex = 51155;

	class Class_820_F135EC100CECC036 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_820_F135EC100CECC036_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_820_F135EC100CECC036_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_820_F135EC100CECC036_METHOD_2_OFFSET))(a1);
		}

	};

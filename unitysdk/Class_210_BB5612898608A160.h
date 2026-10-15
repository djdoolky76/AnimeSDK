#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_210_BB5612898608A160_METHOD_1_OFFSET UNITYSDK_OFFSET(0xBD6DD50)
#define CLASS_210_BB5612898608A160_METHOD_2_OFFSET UNITYSDK_OFFSET(0xBD6D920)
#define CLASS_210_BB5612898608A160_METHOD_OFFSET UNITYSDK_OFFSET(0xBD6DFE0)

inline static constexpr unsigned int Class_210_BB5612898608A160_TypeDefinitionIndex = 50512;

	class Class_210_BB5612898608A160 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_210_BB5612898608A160_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_210_BB5612898608A160_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_210_BB5612898608A160_METHOD_2_OFFSET))(a1);
		}

	};

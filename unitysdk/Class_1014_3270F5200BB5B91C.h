#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1014_3270F5200BB5B91C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F9E60)
#define CLASS_1014_3270F5200BB5B91C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F9A60)
#define CLASS_1014_3270F5200BB5B91C_METHOD_OFFSET UNITYSDK_OFFSET(0x149FA0B0)

inline static constexpr unsigned int Class_1014_3270F5200BB5B91C_TypeDefinitionIndex = 51349;

	class Class_1014_3270F5200BB5B91C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1014_3270F5200BB5B91C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1014_3270F5200BB5B91C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1014_3270F5200BB5B91C_METHOD_2_OFFSET))(a1);
		}

	};

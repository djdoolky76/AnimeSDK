#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1016_5CD3D70AD3603186_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149FAB20)
#define CLASS_1016_5CD3D70AD3603186_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149FA720)
#define CLASS_1016_5CD3D70AD3603186_METHOD_OFFSET UNITYSDK_OFFSET(0x149FAD70)

inline static constexpr unsigned int Class_1016_5CD3D70AD3603186_TypeDefinitionIndex = 51351;

	class Class_1016_5CD3D70AD3603186 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1016_5CD3D70AD3603186_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1016_5CD3D70AD3603186_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1016_5CD3D70AD3603186_METHOD_2_OFFSET))(a1);
		}

	};

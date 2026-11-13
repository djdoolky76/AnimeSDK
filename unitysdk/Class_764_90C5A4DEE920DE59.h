#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_764_90C5A4DEE920DE59_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB57D50)
#define CLASS_764_90C5A4DEE920DE59_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB57950)
#define CLASS_764_90C5A4DEE920DE59_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB57FA0)

inline static constexpr unsigned int Class_764_90C5A4DEE920DE59_TypeDefinitionIndex = 52150;

	class Class_764_90C5A4DEE920DE59 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_764_90C5A4DEE920DE59_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_764_90C5A4DEE920DE59_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_764_90C5A4DEE920DE59_METHOD_2_OFFSET))(a1);
		}

	};

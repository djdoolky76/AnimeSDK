#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_662_825BE43CAEDCCCC2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB2F660)
#define CLASS_662_825BE43CAEDCCCC2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB2F260)
#define CLASS_662_825BE43CAEDCCCC2_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB2F8B0)

inline static constexpr unsigned int Class_662_825BE43CAEDCCCC2_TypeDefinitionIndex = 52048;

	class Class_662_825BE43CAEDCCCC2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_662_825BE43CAEDCCCC2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_662_825BE43CAEDCCCC2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_662_825BE43CAEDCCCC2_METHOD_2_OFFSET))(a1);
		}

	};

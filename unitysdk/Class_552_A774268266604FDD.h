#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_552_A774268266604FDD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157E7640)
#define CLASS_552_A774268266604FDD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157E7240)
#define CLASS_552_A774268266604FDD_METHOD_OFFSET UNITYSDK_OFFSET(0x157E7890)

inline static constexpr unsigned int Class_552_A774268266604FDD_TypeDefinitionIndex = 51937;

	class Class_552_A774268266604FDD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_552_A774268266604FDD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_552_A774268266604FDD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_552_A774268266604FDD_METHOD_2_OFFSET))(a1);
		}

	};

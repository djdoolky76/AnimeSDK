#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_622_4F5F45256F61AAEA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14952C80)
#define CLASS_622_4F5F45256F61AAEA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14952880)
#define CLASS_622_4F5F45256F61AAEA_METHOD_OFFSET UNITYSDK_OFFSET(0x14952ED0)

inline static constexpr unsigned int Class_622_4F5F45256F61AAEA_TypeDefinitionIndex = 50957;

	class Class_622_4F5F45256F61AAEA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_622_4F5F45256F61AAEA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_622_4F5F45256F61AAEA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_622_4F5F45256F61AAEA_METHOD_2_OFFSET))(a1);
		}

	};

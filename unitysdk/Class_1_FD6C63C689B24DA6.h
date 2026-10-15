#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FD6C63C689B24DA6_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1F49E5B0)
#define CLASS_1_FD6C63C689B24DA6_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1F49E5C0)
#define CLASS_1_FD6C63C689B24DA6_METHOD_OFFSET UNITYSDK_OFFSET(0x1F49E5A0)

inline static constexpr unsigned int Class_1_FD6C63C689B24DA6_TypeDefinitionIndex = 5834;

	class Class_1_FD6C63C689B24DA6 : public ::System::Object
	{
	public:
		static ::System::Boolean Method_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD6C63C689B24DA6_METHOD_OFFSET))(a1);
		}

		static ::System::UInt64 Method_1_1()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C63C689B24DA6_METHOD_1_OFFSET))();
		}

		static ::System::Int32 Method_2_2()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C63C689B24DA6_METHOD_2_OFFSET))();
		}

	};

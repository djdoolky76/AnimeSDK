#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class B32B723814B58D7F;
namespace System { template <typename T> class E891BA3236FD13E7; }

#define B32B723814B58D7F_F74AD97558C000DB_ABC01DCD675ECF3D_OFFSET UNITYSDK_OFFSET(0x1E8E720)
#define B32B723814B58D7F_F74AD97558C000DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B32B723814B58D7F_F74AD97558C000DB_TypeDefinitionIndex = 9584;

class B32B723814B58D7F_F74AD97558C000DB : public ::System::Object
{
public:
	::B32B723814B58D7F* A544919C800E2923; // 0x10
	::System::Int32 FC300ADBDFF24726; // 0x18
	::System::Byte _padding0[0x4];
	::System::E891BA3236FD13E7<::B07850EA97DBB75A<::System::UInt32, ::System::UInt32>>* F422651CC4956382; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B32B723814B58D7F_F74AD97558C000DB__CTOR_OFFSET))(this);
	}

	::System::Boolean ABC01DCD675ECF3D(::B07850EA97DBB75A<::System::UInt32, ::System::UInt32> BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::B07850EA97DBB75A<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + B32B723814B58D7F_F74AD97558C000DB_ABC01DCD675ECF3D_OFFSET))(this, BB8C609F76620E45);
	}
};

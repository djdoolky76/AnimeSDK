#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

namespace System { class Object; }

#define AC92C33EC7B28EC8_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x4042190)
#define AC92C33EC7B28EC8_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x40420E0)
#define AC92C33EC7B28EC8_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x4041FD0)
#define AC92C33EC7B28EC8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40422B0)
#define AC92C33EC7B28EC8__CTOR_OFFSET UNITYSDK_OFFSET(0x4042300)

inline static constexpr unsigned int AC92C33EC7B28EC8_TypeDefinitionIndex = 20654;

struct alignas(4) AC92C33EC7B28EC8
{
	::Unity::Mathematics::float3 EF750947C30CE985; // 0x10
	::Unity::Mathematics::float3 A468C50BBCDB925A; // 0x1C
	::Unity::Mathematics::float3 ED04E092F24BD23F; // 0x28
	::Unity::Mathematics::float3 B6B0744FCE294657; // 0x34

	/*
	::System::Boolean FC3208D7B8C7EE04(::AC92C33EC7B28EC8 BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AC92C33EC7B28EC8))((::PBYTE)hIl2Cpp + AC92C33EC7B28EC8_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Boolean FC3208D7B8C7EE04_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AC92C33EC7B28EC8_FC3208D7B8C7EE04_1_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor(::UnityEngine::Splines::BezierKnot B35BBBE7E39341A2, ::UnityEngine::Splines::BezierKnot AE40CAA6BBFEAD2C)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + AC92C33EC7B28EC8__CTOR_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor_1(::Unity::Mathematics::float3 E56921A8A02EE740, ::Unity::Mathematics::float3 ED6BA5E2880F301C, ::Unity::Mathematics::float3 AB470184008E3FF1, ::Unity::Mathematics::float3 F65D7F6F841641BE)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + AC92C33EC7B28EC8__CTOR_1_OFFSET))(this, E56921A8A02EE740, ED6BA5E2880F301C, AB470184008E3FF1, F65D7F6F841641BE);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AC92C33EC7B28EC8_B996A70283B60FAC_OFFSET))(this);
	}
};

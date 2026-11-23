#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4028EE0)
#define UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x4028FA0)
#define UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4028FE0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET UNITYSDK_OFFSET(0x4029510)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET UNITYSDK_OFFSET(0x4029530)
#define UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET UNITYSDK_OFFSET(0x4029550)
#define UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET UNITYSDK_OFFSET(0x4029570)
#define UNITY_MATHEMATICS_FLOAT4_GET_XYZ_OFFSET UNITYSDK_OFFSET(0x4028100)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET UNITYSDK_OFFSET(0x4029590)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET UNITYSDK_OFFSET(0x40295B0)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET UNITYSDK_OFFSET(0x40295D0)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET UNITYSDK_OFFSET(0x40295F0)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET UNITYSDK_OFFSET(0x4029610)
#define UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x4029630)
#define UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x2A5FA50)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x40296D0)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x40296F0)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x4029680)
#define UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x4029710)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4029040)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x40292A0)
#define UNITY_MATHEMATICS_FLOAT4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40294F0)
#define UNITY_MATHEMATICS_FLOAT4__CTOR_OFFSET UNITYSDK_OFFSET(0x39CBF10)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4_TypeDefinitionIndex = 21261;

	struct alignas(4) float4
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::Unity::Mathematics::float3 get_xyz()
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_XYZ_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4 B689A73377154515, ::Unity::Mathematics::float4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		static ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4 B689A73377154515, ::Unity::Mathematics::float4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176, ::System::Single B5F62894A37965D9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176, B5F62894A37965D9);
		}

		/*
		::Unity::Mathematics::float4 get_yzxy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_wwwx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET))(this);
		}
		*/

		/*
		static ::Unity::Mathematics::float4 op_Multiply_1(::Unity::Mathematics::float4 B689A73377154515, ::System::Single F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_1_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor_1(::Unity::Mathematics::float3 E5F02EB18FBA8F8F, ::System::Single B5F62894A37965D9)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4__CTOR_1_OFFSET))(this, E5F02EB18FBA8F8F, B5F62894A37965D9);
		}

		/*
		static ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4 B689A73377154515, ::Unity::Mathematics::float4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::System::Boolean Equals(::Unity::Mathematics::float4 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_zwxy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET))(this);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_1_OFFSET))(this, E1B624472530B0E4);
		}

		/*
		static ::Unity::Mathematics::float4 op_Implicit(::UnityEngine::E8984F4E44AE20E5 F5006C45C2B93A1C)
		{
			return ((::Unity::Mathematics::float4(*)(::UnityEngine::E8984F4E44AE20E5))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_IMPLICIT_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_1_OFFSET))(this);
		}

		/*
		::Unity::Mathematics::float4 get_wwww()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_yzxz()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_xyzx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_wzyx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_zxyz()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET))(this);
		}
		*/

		/*
		static ::Unity::Mathematics::float4 op_Multiply_2(::System::Single B689A73377154515, ::Unity::Mathematics::float4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float4(*)(::System::Single, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_2_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_zxyy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET))(this);
		}
		*/
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float4.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/float3x3.h"
#include "unitysdk/Unity/Mathematics/float4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_QUATERNION_AXISANGLE_OFFSET UNITYSDK_OFFSET(0x402CE30)
#define UNITY_MATHEMATICS_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x402CF30)
#define UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x4028FA0)
#define UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4028FE0)
#define UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET UNITYSDK_OFFSET(0x402CFF0)
#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x2A5FA50)
#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x2A5FA50)
#define UNITY_MATHEMATICS_QUATERNION_ROTATEY_OFFSET UNITYSDK_OFFSET(0x402D470)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x402D7C0)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x402D560)
#define UNITY_MATHEMATICS_QUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x402DA10)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3250330)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x39CBF10)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x402DA50)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x402DDB0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int quaternion_TypeDefinitionIndex = 21260;

	struct alignas(4) quaternion
	{
		static ::Unity::Mathematics::quaternion* StaticGet_identity()
		{
			return (::Unity::Mathematics::quaternion*)Il2CppClass::FromTypeDefinitionIndex(quaternion_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Unity::Mathematics::float4 value; // 0x10

		::System::Void _ctor(::Unity::Mathematics::float4x4 B8A196AEAF73E28B)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float4x4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_OFFSET))(this, B8A196AEAF73E28B);
		}

		/*
		::System::Boolean Equals(::Unity::Mathematics::quaternion BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET))(this, BB8C609F76620E45);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::quaternion RotateY(::System::Single AD1329E16AB80F43)
		{
			return ((::Unity::Mathematics::quaternion(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_ROTATEY_OFFSET))(AD1329E16AB80F43);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion LookRotationSafe(::Unity::Mathematics::float3 B78356FBC32D74BD, ::Unity::Mathematics::float3 BE38C169EB1E684C)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET))(B78356FBC32D74BD, BE38C169EB1E684C);
		}
		*/

		::System::Boolean Equals_1(::System::Object* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_1_OFFSET))(this, BB8C609F76620E45);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Quaternion op_Implicit(::Unity::Mathematics::quaternion E74C726392028037)
		{
			return ((::UnityEngine::Quaternion(*)(::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET))(E74C726392028037);
		}
		*/

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		static ::Unity::Mathematics::quaternion op_Implicit_1(::UnityEngine::Quaternion E74C726392028037)
		{
			return ((::Unity::Mathematics::quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_1_OFFSET))(E74C726392028037);
		}
		*/

		::System::Void _ctor_1(::Unity::Mathematics::float4 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_1_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_2(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176, ::System::Single B5F62894A37965D9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_2_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176, B5F62894A37965D9);
		}

		/*
		static ::Unity::Mathematics::quaternion AxisAngle(::Unity::Mathematics::float3 F24A60394CB7A82C, ::System::Single AD1329E16AB80F43)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_AXISANGLE_OFFSET))(F24A60394CB7A82C, AD1329E16AB80F43);
		}
		*/

		::System::Void _ctor_3(::Unity::Mathematics::float3x3 B8A196AEAF73E28B)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_3_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}

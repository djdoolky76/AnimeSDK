#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float4.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4029760)
#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x40298D0)
#define UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4029AC0)
#define UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x402AD20)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4029C20)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x402A410)
#define UNITY_MATHEMATICS_FLOAT4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x402AB90)
#define UNITY_MATHEMATICS_FLOAT4X4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x402ACF0)
#define UNITY_MATHEMATICS_FLOAT4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x402ABF0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4x4_TypeDefinitionIndex = 21250;

	struct alignas(4) float4x4
	{
		static ::Unity::Mathematics::float4x4* StaticGet_identity()
		{
			return (::Unity::Mathematics::float4x4*)Il2CppClass::FromTypeDefinitionIndex(float4x4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Unity::Mathematics::float4 c0; // 0x10
		::Unity::Mathematics::float4 c1; // 0x20
		::Unity::Mathematics::float4 c2; // 0x30
		::Unity::Mathematics::float4 c3; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4__CCTOR_OFFSET))();
		}

		/*
		static ::Unity::Mathematics::float4x4 op_Implicit(::UnityEngine::ACF10FE87B4C5617 B8A196AEAF73E28B)
		{
			return ((::Unity::Mathematics::float4x4(*)(::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_OP_IMPLICIT_OFFSET))(B8A196AEAF73E28B);
		}
		*/

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::Void _ctor(::System::Single B0D053F688EC0F61, ::System::Single AEF152E613D24FF9, ::System::Single A1F2E9C7EB78E0C2, ::System::Single AF4A816C29ABDB81, ::System::Single F31CF834735F73A9, ::System::Single E7C4C3E723E97AC7, ::System::Single FC9CC82971959B8F, ::System::Single AC8CA4D5052C2BEB, ::System::Single F25D061F0B03DEC9, ::System::Single E435C6EEB13772D2, ::System::Single A7F3238A5C4405D7, ::System::Single A93D4384CECC1236, ::System::Single B02664D748A3B16D, ::System::Single BA0C6B2DC058D822, ::System::Single F53DDDABAD31F840, ::System::Single F082FE784785F072)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4__CTOR_OFFSET))(this, B0D053F688EC0F61, AEF152E613D24FF9, A1F2E9C7EB78E0C2, AF4A816C29ABDB81, F31CF834735F73A9, E7C4C3E723E97AC7, FC9CC82971959B8F, AC8CA4D5052C2BEB, F25D061F0B03DEC9, E435C6EEB13772D2, A7F3238A5C4405D7, A93D4384CECC1236, B02664D748A3B16D, BA0C6B2DC058D822, F53DDDABAD31F840, F082FE784785F072);
		}

		::System::Void _ctor_1(::Unity::Mathematics::float4 F9D89C5E009F33BA, ::Unity::Mathematics::float4 A64886CA86DF769A, ::Unity::Mathematics::float4 EDC812878A8F27BB, ::Unity::Mathematics::float4 B62478E232381A73)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4__CTOR_1_OFFSET))(this, F9D89C5E009F33BA, A64886CA86DF769A, EDC812878A8F27BB, B62478E232381A73);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET))(this, E1B624472530B0E4);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_1_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::Unity::Mathematics::float4x4 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float4x4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_1_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/
	};
}

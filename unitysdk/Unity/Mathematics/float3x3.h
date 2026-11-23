#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4028240)
#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET UNITYSDK_OFFSET(0x4028370)
#define UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4028420)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4028980)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x40284D0)
#define UNITY_MATHEMATICS_FLOAT3X3__CCTOR_OFFSET UNITYSDK_OFFSET(0x4028DF0)
#define UNITY_MATHEMATICS_FLOAT3X3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4028EA0)
#define UNITY_MATHEMATICS_FLOAT3X3__CTOR_OFFSET UNITYSDK_OFFSET(0x4028E40)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3x3_TypeDefinitionIndex = 21253;

	struct alignas(4) float3x3
	{
		static ::Unity::Mathematics::float3x3* StaticGet_identity()
		{
			return (::Unity::Mathematics::float3x3*)Il2CppClass::FromTypeDefinitionIndex(float3x3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Unity::Mathematics::float3 c0; // 0x10
		::Unity::Mathematics::float3 c1; // 0x1C
		::Unity::Mathematics::float3 c2; // 0x28

		::System::Void _ctor(::System::Single B0D053F688EC0F61, ::System::Single AEF152E613D24FF9, ::System::Single A1F2E9C7EB78E0C2, ::System::Single F31CF834735F73A9, ::System::Single E7C4C3E723E97AC7, ::System::Single FC9CC82971959B8F, ::System::Single F25D061F0B03DEC9, ::System::Single E435C6EEB13772D2, ::System::Single A7F3238A5C4405D7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CTOR_OFFSET))(this, B0D053F688EC0F61, AEF152E613D24FF9, A1F2E9C7EB78E0C2, F31CF834735F73A9, E7C4C3E723E97AC7, FC9CC82971959B8F, F25D061F0B03DEC9, E435C6EEB13772D2, A7F3238A5C4405D7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CCTOR_OFFSET))();
		}

		/*
		::System::Boolean Equals(::Unity::Mathematics::float3x3 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor_1(::Unity::Mathematics::float3 F9D89C5E009F33BA, ::Unity::Mathematics::float3 A64886CA86DF769A, ::Unity::Mathematics::float3 EDC812878A8F27BB)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CTOR_1_OFFSET))(this, F9D89C5E009F33BA, A64886CA86DF769A, EDC812878A8F27BB);
		}

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::Boolean Equals_1(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_1_OFFSET))(this, E1B624472530B0E4);
		}
	};
}

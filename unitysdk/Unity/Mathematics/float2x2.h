#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float2.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT2X2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x40276D0)
#define UNITY_MATHEMATICS_FLOAT2X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x4027680)
#define UNITY_MATHEMATICS_FLOAT2X2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4027790)
#define UNITY_MATHEMATICS_FLOAT2X2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4027AD0)
#define UNITY_MATHEMATICS_FLOAT2X2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4027880)
#define UNITY_MATHEMATICS_FLOAT2X2__CCTOR_OFFSET UNITYSDK_OFFSET(0x4027D30)
#define UNITY_MATHEMATICS_FLOAT2X2__CTOR_OFFSET UNITYSDK_OFFSET(0x4027D70)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float2x2_TypeDefinitionIndex = 21247;

	struct alignas(4) float2x2
	{
		static ::Unity::Mathematics::float2x2* StaticGet_identity()
		{
			return (::Unity::Mathematics::float2x2*)Il2CppClass::FromTypeDefinitionIndex(float2x2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Unity::Mathematics::float2 c0; // 0x10
		::Unity::Mathematics::float2 c1; // 0x18

		/*
		::System::Boolean Equals(::Unity::Mathematics::float2x2 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float2x2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2_EQUALS_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2__CCTOR_OFFSET))();
		}

		::System::Boolean Equals_1(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2_EQUALS_1_OFFSET))(this, E1B624472530B0E4);
		}

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2_TOSTRING_1_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single B0D053F688EC0F61, ::System::Single AEF152E613D24FF9, ::System::Single F31CF834735F73A9, ::System::Single E7C4C3E723E97AC7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2X2__CTOR_OFFSET))(this, B0D053F688EC0F61, AEF152E613D24FF9, F31CF834735F73A9, E7C4C3E723E97AC7);
		}
	};
}

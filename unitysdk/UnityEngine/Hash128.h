#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_HASH128_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x410E9C0)
#define UNITYENGINE_HASH128_COMPARETO_OFFSET UNITYSDK_OFFSET(0x410EAC0)
#define UNITYENGINE_HASH128_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x410EB30)
#define UNITYENGINE_HASH128_EQUALS_OFFSET UNITYSDK_OFFSET(0x410EBE0)
#define UNITYENGINE_HASH128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x410EC10)
#define UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x410EC40)
#define UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x410EC80)
#define UNITYENGINE_HASH128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x410EDA0)
#define UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x410EDC0)
#define UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x410EE10)
#define UNITYENGINE_HASH128_PARSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x410ECC0)
#define UNITYENGINE_HASH128_PARSE_OFFSET UNITYSDK_OFFSET(0x410ED10)
#define UNITYENGINE_HASH128_TOSTRING_OFFSET UNITYSDK_OFFSET(0x410ED60)
#define UNITYENGINE_HASH128__CTOR_OFFSET UNITYSDK_OFFSET(0x2294A70)

namespace UnityEngine
{
	inline static constexpr unsigned int Hash128_TypeDefinitionIndex = 17088;

	struct alignas(4) Hash128
	{
		::System::UInt64 u64_0; // 0x10
		::System::UInt64 u64_1; // 0x18

		/*
		static ::System::Boolean op_GreaterThan(::UnityEngine::Hash128 BB8C609F76620E45, ::UnityEngine::Hash128 A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/

		/*
		static ::System::String* Hash128ToStringImpl(::UnityEngine::Hash128 ED6B739E3493B1E8)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_OFFSET))(ED6B739E3493B1E8);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Hash128 B98DED0182918CFB, ::UnityEngine::Hash128 ADE82CA838FAF12A)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_EQUALITY_OFFSET))(B98DED0182918CFB, ADE82CA838FAF12A);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Hash128 A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Void Parse_Injected(::System::String* E3B7473C55FAE535, ::UnityEngine::Hash128& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Hash128&))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_PARSE_INJECTED_OFFSET))(E3B7473C55FAE535, FEC8DC0392823C8D);
		}
		*/

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		static ::System::Boolean op_LessThan(::UnityEngine::Hash128 BB8C609F76620E45, ::UnityEngine::Hash128 A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/

		/*
		::System::Int32 CompareTo(::UnityEngine::Hash128 F2B1B9B0CD5BC286)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::String* Hash128ToStringImpl_Injected(::UnityEngine::Hash128& ED6B739E3493B1E8)
		{
			return ((::System::String*(*)(::UnityEngine::Hash128&))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_INJECTED_OFFSET))(ED6B739E3493B1E8);
		}
		*/

		/*
		static ::UnityEngine::Hash128 Parse(::System::String* E3B7473C55FAE535)
		{
			return ((::UnityEngine::Hash128(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_PARSE_OFFSET))(E3B7473C55FAE535);
		}
		*/

		::System::Int32 CompareTo_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GETHASHCODE_OFFSET))(this);
		}

		::System::Void _ctor(::System::UInt64 EF59F8F702B34A67, ::System::UInt64 E8F319183C08C262)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128__CTOR_OFFSET))(this, EF59F8F702B34A67, E8F319183C08C262);
		}
	};
}

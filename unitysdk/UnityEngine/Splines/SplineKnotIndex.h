#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x404A380)
#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x402E120)
#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x404A430)
#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x404A440)
#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x404A4D0)
#define UNITYENGINE_SPLINES_SPLINEKNOTINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB750)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineKnotIndex_TypeDefinitionIndex = 20641;

	struct alignas(4) SplineKnotIndex
	{
		static ::UnityEngine::Splines::SplineKnotIndex* StaticGet_Invalid()
		{
			return (::UnityEngine::Splines::SplineKnotIndex*)Il2CppClass::FromTypeDefinitionIndex(SplineKnotIndex_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 Spline; // 0x10
		::System::Int32 Knot; // 0x14

		::System::Void _ctor(::System::Int32 F03E0BDCBABB08A2, ::System::Int32 BB4DB3113013548E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX__CTOR_OFFSET))(this, F03E0BDCBABB08A2, BB4DB3113013548E);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Splines::SplineKnotIndex BE150E17AA9F5901)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX_EQUALS_OFFSET))(this, BE150E17AA9F5901);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINEKNOTINDEX_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}
	};
}

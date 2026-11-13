#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PROBUILDER_EDGE_ADD_OFFSET UNITYSDK_OFFSET(0xD6C04E0)
#define UNITYENGINE_PROBUILDER_EDGE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6C0D90)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xFDC3C0)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_2_OFFSET UNITYSDK_OFFSET(0xFDC3E0)
#define UNITYENGINE_PROBUILDER_EDGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xFDC3B0)
#define UNITYENGINE_PROBUILDER_EDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFDC1A0)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xFDC240)
#define UNITYENGINE_PROBUILDER_EDGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDC170)
#define UNITYENGINE_PROBUILDER_EDGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDC210)
#define UNITYENGINE_PROBUILDER_EDGE_GETINDICES_OFFSET UNITYSDK_OFFSET(0xD6C0880)
#define UNITYENGINE_PROBUILDER_EDGE_ISVALID_OFFSET UNITYSDK_OFFSET(0xFDC140)
#define UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0xD6C03F0)
#define UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xD6C03B0)
#define UNITYENGINE_PROBUILDER_EDGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xD6C0430)
#define UNITYENGINE_PROBUILDER_EDGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xD6C0460)
#define UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0xD6C0410)
#define UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xD6C03D0)
#define UNITYENGINE_PROBUILDER_EDGE_SUBTRACT_OFFSET UNITYSDK_OFFSET(0xD6C0560)
#define UNITYENGINE_PROBUILDER_EDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDC160)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Edge_TypeDefinitionIndex = 45426;

	struct alignas(4) Edge
	{
		::System::Int32 a; // 0x10
		::System::Int32 b; // 0x14
		static ::UnityEngine::ProBuilder::Edge* StaticGet_Empty()
		{
			return (::UnityEngine::ProBuilder::Edge*)UnitySDK::FromName("UnityEngine.ProBuilder", "Edge")->GetStaticField(0x142C0);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Edge op_Addition_1(::UnityEngine::ProBuilder::Edge a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_ADDITION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Edge op_Subtraction_1(::UnityEngine::ProBuilder::Edge a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_SUBTRACTION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Edge Add(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_ADD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Edge Subtract(::UnityEngine::ProBuilder::Edge a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_SUBTRACT_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals_2(::UnityEngine::ProBuilder::Edge a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_EQUALS_2_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Contains(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Contains_1(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_1_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Contains_2(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_CONTAINS_2_OFFSET))(this, a1, a2);
		}

		/*
		static ::System::Void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGE_GETINDICES_OFFSET))(a1, a2);
		}
		*/

	};
}

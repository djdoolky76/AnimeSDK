#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_A3B9F631A2D95602_OFFSET UNITYSDK_OFFSET(0x42A1460)
#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_F22EA1233675228D_OFFSET UNITYSDK_OFFSET(0x428C9B0)
#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_F2D5333BB13534C6_OFFSET UNITYSDK_OFFSET(0x428C9C0)
#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_FDCCFE329ACD5197_OFFSET UNITYSDK_OFFSET(0x42A1450)
#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x42A17C0)
#define A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex = 13957;

	class EB26201305922708_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::EB26201305922708_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::EB26201305922708_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet_A7539CEF38B4E00D()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Object** StaticGet_E96D0FCBF684535C()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet_A804DFD074FC9D69()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Object** StaticGet_A6F85056FAEF059B()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EB26201305922708_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Single FDCCFE329ACD5197(::UnityEngine::Vector2 A342D5344F7596A8)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_FDCCFE329ACD5197_OFFSET))(this, A342D5344F7596A8);
		}

		::System::Void F22EA1233675228D(::UnityEngine::Vector2& A342D5344F7596A8, ::System::Single F5006C45C2B93A1C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_F22EA1233675228D_OFFSET))(this, A342D5344F7596A8, F5006C45C2B93A1C);
		}

		::System::Single A3B9F631A2D95602(::UnityEngine::Vector2 A342D5344F7596A8)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_A3B9F631A2D95602_OFFSET))(this, A342D5344F7596A8);
		}

		::System::Void F2D5333BB13534C6(::UnityEngine::Vector2& A342D5344F7596A8, ::System::Single F5006C45C2B93A1C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB26201305922708_F5628F8349D4A8A6_F2D5333BB13534C6_OFFSET))(this, A342D5344F7596A8, F5006C45C2B93A1C);
		}
	};
}

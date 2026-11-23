#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define A7C4D8DC50C86DC6_F3389D52164761AE_EDA51FC2E855741B_OFFSET UNITYSDK_OFFSET(0x420EE50)
#define A7C4D8DC50C86DC6_F3389D52164761AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x420F480)
#define A7C4D8DC50C86DC6_F3389D52164761AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int F3389D52164761AE_TypeDefinitionIndex = 18762;

	class F3389D52164761AE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_EC19458A5B545F5A()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F3389D52164761AE_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*>** StaticGet_A7DDD89572BE5ECC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(F3389D52164761AE_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::TextCore::Text::FontAsset*>** StaticGet_B0013476FF7C2F1D()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::TextCore::Text::FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(F3389D52164761AE_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_BE4F42A4223B83E7()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(F3389D52164761AE_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Int32* StaticGet_BBBD3D8AF8DEB3AD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F3389D52164761AE_TypeDefinitionIndex)->GetStaticField(0x20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_F3389D52164761AE__CTOR_OFFSET))(this);
		}

		static ::System::Void EDA51FC2E855741B(::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_F3389D52164761AE_EDA51FC2E855741B_OFFSET))(A04B97A6BA51CC83);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_F3389D52164761AE__CCTOR_OFFSET))();
		}
	};
}

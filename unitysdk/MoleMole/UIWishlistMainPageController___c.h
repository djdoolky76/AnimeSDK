#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E7BFC0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E7C000)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x13E7C010)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_2_OFFSET UNITYSDK_OFFSET(0x13E7C060)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_6_OFFSET UNITYSDK_OFFSET(0x13E7C0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c_TypeDefinitionIndex = 45179;

	class UIWishlistMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C5F0);
		}
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__28_2()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C5F8);
		}
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__28_6()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C600);
		}
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_0(::FOLOGHLENFB* ext, ::FOLOGHLENFB* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_2(::FOLOGHLENFB* ext, ::FOLOGHLENFB* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_2_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_6(::FOLOGHLENFB* ext, ::FOLOGHLENFB* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_6_OFFSET))(this, ext, templateExt);
		}
	};
}

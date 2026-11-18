#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_DOCMAAHHPBI_OFFSET UNITYSDK_OFFSET(0x1984FD30)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_GNEHJIPBJFP_OFFSET UNITYSDK_OFFSET(0x1984FC30)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_HFKLOCBNIFI_OFFSET UNITYSDK_OFFSET(0x1984FCB0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_OEPLPJECBGC_OFFSET UNITYSDK_OFFSET(0x1984F710)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1984F6C0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1984F700)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup___c_TypeDefinitionIndex = 74885;

	class UIColorTweakerTargetGroup___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_0()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x48950);
		}
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x48958);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x48960);
		}
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_2()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x48968);
		}
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_3()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x48970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Void OEPLPJECBGC(::UnityEngine::Component* IPMMCGDMODG, ::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_OEPLPJECBGC_OFFSET))(this, IPMMCGDMODG, JBBFCGAMDHI);
		}

		::System::Void GNEHJIPBJFP(::UnityEngine::Component* IPMMCGDMODG, ::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_GNEHJIPBJFP_OFFSET))(this, IPMMCGDMODG, JBBFCGAMDHI);
		}

		::UnityEngine::Color HFKLOCBNIFI(::UnityEngine::Component* IPMMCGDMODG)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_HFKLOCBNIFI_OFFSET))(this, IPMMCGDMODG);
		}

		::UnityEngine::Color DOCMAAHHPBI(::UnityEngine::Component* IPMMCGDMODG)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_DOCMAAHHPBI_OFFSET))(this, IPMMCGDMODG);
		}
	};
}

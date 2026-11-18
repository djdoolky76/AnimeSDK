#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIScreenSizeManager_EBOOLILDEIC; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x15C69100)
#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C692C0)
#define MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15C69480)
#define MOLEMOLE_UISCREENSIZEMANAGER_DEBEMPHOCBN_OFFSET UNITYSDK_OFFSET(0x15C69840)
#define MOLEMOLE_UISCREENSIZEMANAGER_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x15C69C40)
#define MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C69550)
#define MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x15C69B40)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x15C691E0)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C693A0)
#define MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C69C20)
#define MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C69BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenSizeManager_TypeDefinitionIndex = 39898;

	class UIScreenSizeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UIScreenSizeManager_EBOOLILDEIC** StaticGet_BNANNPOLFAC()
		{
			return (::MoleMole::UIScreenSizeManager_EBOOLILDEIC**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x472C0);
		}
		static ::System::String** StaticGet_CIOPHMMCAOE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x472C8);
		}
		static ::System::Action** StaticGet_PGMEJLDDHFI()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x472D0);
		}
		static ::System::Boolean* StaticGet_RightClickOpenView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10670);
		}
		static ::UnityEngine::ScreenOrientation* StaticGet_KPKCPFNFBNA()
		{
			return (::UnityEngine::ScreenOrientation*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10674);
		}
		static ::System::Int32* StaticGet_GAOODNKIJKI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10678);
		}
		static ::UnityEngine::Vector2* StaticGet_BCNLPNGBMKL()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x1067C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void add_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_EBOOLILDEIC* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_EBOOLILDEIC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET))(EGEGIMGMJHN);
		}

		static ::System::Void remove_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_EBOOLILDEIC* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_EBOOLILDEIC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET))(EGEGIMGMJHN);
		}

		static ::System::Void add_update(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET))(EGEGIMGMJHN);
		}

		static ::System::Void remove_update(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET))(EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Void MarkLayoutForRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET))();
		}

		static ::System::Void DEBEMPHOCBN(::UnityEngine::Vector2 NHOEAFJJJGA, ::UnityEngine::Vector2 CMJHMGPKGKH)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_DEBEMPHOCBN_OFFSET))(NHOEAFJJJGA, CMJHMGPKGKH);
		}

		static ::System::Void JPOLBPCHLHK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_JPOLBPCHLHK_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A392B2D66FCEFD66.h"
#include "unitysdk/A7D075E05F03934A.h"
#include "unitysdk/E04825F213D69F63.h"
#include "unitysdk/PWPackageAction.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ProceduralWorlds::Setup { class PWPackageInfo_A83984C652023992; }
namespace ProceduralWorlds::Setup { class PWPackageInfo_AC82116889EF95A5; }
namespace ProceduralWorlds::Setup { class PWPackageInfo_B48C7BD67C9B4CD5; }
namespace ProceduralWorlds::Setup { class SetupSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }

#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEINSTALLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x29F5B30)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEINSTALLSTARTED_OFFSET UNITYSDK_OFFSET(0x29F5BD0)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEUNINSTALLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x29F5C70)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_FIXGAIALAYERS_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GAIABIOMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GAIABIOMEINSTALL_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GET_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x29F5D10)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x29F55A0)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ONCOMPILATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x29F5980)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ONIMPORTPACKAGECOMPLETED_OFFSET UNITYSDK_OFFSET(0x29F5990)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_POSTINSTALL_OFFSET UNITYSDK_OFFSET(0x29F59E0)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_POSTUNINSTALL_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEINSTALLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x29F5DC0)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEINSTALLSTARTED_OFFSET UNITYSDK_OFFSET(0x29F5E60)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEUNINSTALLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x29F5F00)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_STARTPOSTINSTALL_OFFSET UNITYSDK_OFFSET(0x29F5A40)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_STATUSUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_UNINSTALL_OFFSET UNITYSDK_OFFSET(0x29F5AC0)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_UPDATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x29F5B20)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int PWPackageInfo_TypeDefinitionIndex = 15846;

	class PWPackageInfo : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::String** StaticGet_m_installRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::GUIContent** StaticGet_m_iconOKContent()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::UnityEngine::GUIContent** StaticGet_m_iconUpdateContent()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::UnityEngine::GUIContent** StaticGet_m_iconWarningContent()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::UnityEngine::GUIContent** StaticGet_m_iconNoUnityPkgContent()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::UnityEngine::GUIContent** StaticGet_m_iconNotInstalledContent()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::ProceduralWorlds::Setup::SetupSettings** StaticGet_m_setupSettings()
		{
			return (::ProceduralWorlds::Setup::SetupSettings**)Il2CppClass::FromTypeDefinitionIndex(PWPackageInfo_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		::System::Boolean m_foldedOut; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* m_ID; // 0x20
		::System::String* m_displayName; // 0x28
		::A392B2D66FCEFD66 m_category; // 0x30
		::E04825F213D69F63 m_status; // 0x34
		::System::Single m_installedSizeMB; // 0x38
		::System::Single m_packageSizeMB; // 0x3C
		::UnityEngine::Object* m_unityPackage; // 0x40
		::System::String* m_installFolder; // 0x48
		::System::String* m_packageInfo; // 0x50
		::System::Boolean m_updateAvailable; // 0x58
		::System::Boolean m_containsGaiaBiomes; // 0x59
		::System::Boolean m_containsGaiaLayers; // 0x5A
		::System::Boolean m_containsRPMaterials; // 0x5B
		::A7D075E05F03934A m_defaultAction; // 0x5C
		::PWPackageAction m_currentAction; // 0x60
		::System::Int32 m_installOrder; // 0x64
		::ProceduralWorlds::Setup::PWPackageInfo_AC82116889EF95A5* OnPackageInstallStarted; // 0x68
		::ProceduralWorlds::Setup::PWPackageInfo_B48C7BD67C9B4CD5* OnPackageInstallCompleted; // 0x70
		::ProceduralWorlds::Setup::PWPackageInfo_A83984C652023992* OnPackageUnInstallCompleted; // 0x78
		::System::String* m_installPath; // 0x80
		::UnityEngine::GUIStyle* m_linkStyle; // 0x88
		::UnityEngine::GUIContent* m_linkContent; // 0x90

		::System::Void OnImportPackageCompleted(::System::String* BD33A9DF6B122EB4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ONIMPORTPACKAGECOMPLETED_OFFSET))(this, BD33A9DF6B122EB4);
		}

		::System::Void StartPostInstall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_STARTPOSTINSTALL_OFFSET))(this);
		}

		::System::Void remove_OnPackageUnInstallCompleted(::ProceduralWorlds::Setup::PWPackageInfo_A83984C652023992* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_A83984C652023992*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEUNINSTALLCOMPLETED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void add_OnPackageInstallCompleted(::ProceduralWorlds::Setup::PWPackageInfo_B48C7BD67C9B4CD5* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_B48C7BD67C9B4CD5*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEINSTALLCOMPLETED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void add_OnPackageInstallStarted(::ProceduralWorlds::Setup::PWPackageInfo_AC82116889EF95A5* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_AC82116889EF95A5*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEINSTALLSTARTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UpdateMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_UPDATEMATERIALS_OFFSET))(this);
		}

		::System::Void GaiaBiomeCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GAIABIOMECLEANUP_OFFSET))(this);
		}

		::System::Void PostInstall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_POSTINSTALL_OFFSET))(this);
		}

		::System::Void remove_OnPackageInstallStarted(::ProceduralWorlds::Setup::PWPackageInfo_AC82116889EF95A5* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_AC82116889EF95A5*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEINSTALLSTARTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void GaiaBiomeInstall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GAIABIOMEINSTALL_OFFSET))(this);
		}

		::System::Void add_OnPackageUnInstallCompleted(::ProceduralWorlds::Setup::PWPackageInfo_A83984C652023992* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_A83984C652023992*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ADD_ONPACKAGEUNINSTALLCOMPLETED_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::ProceduralWorlds::Setup::SetupSettings* get_SetupSettings()
		{
			return ((::ProceduralWorlds::Setup::SetupSettings*(*)())((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_GET_SETUPSETTINGS_OFFSET))();
		}

		::System::Void FixGaiaLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_FIXGAIALAYERS_OFFSET))(this);
		}

		::System::Void PostUnInstall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_POSTUNINSTALL_OFFSET))(this);
		}

		::System::Void remove_OnPackageInstallCompleted(::ProceduralWorlds::Setup::PWPackageInfo_B48C7BD67C9B4CD5* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ProceduralWorlds::Setup::PWPackageInfo_B48C7BD67C9B4CD5*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_REMOVE_ONPACKAGEINSTALLCOMPLETED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_INITIALIZE_OFFSET))(this);
		}

		::System::Void Uninstall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_UNINSTALL_OFFSET))(this);
		}

		::System::Void OnCompilationFinished(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_ONCOMPILATIONFINISHED_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Void StatusUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_STATUSUPDATE_OFFSET))(this);
		}
	};
}

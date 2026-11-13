#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/BMFJEMFMLGC.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CharacterLineLightGroup;
class CharacterLineLightGroup_BCMLJEIDFBN;
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHARACTERLINELIGHTGROUP_CHECKCHARACTERREGISTED_OFFSET UNITYSDK_OFFSET(0x19919950)
#define CHARACTERLINELIGHTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1991BAC0)
#define CHARACTERLINELIGHTGROUP_GETDISTPURESQR_OFFSET UNITYSDK_OFFSET(0x1991A1A0)
#define CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1991B760)
#define CHARACTERLINELIGHTGROUP_JEEPOIPPJLG_OFFSET UNITYSDK_OFFSET(0x1991A580)
#define CHARACTERLINELIGHTGROUP_JLHFHBGGLIP_OFFSET UNITYSDK_OFFSET(0x1991A470)
#define CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1991AC50)
#define CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1991AC00)
#define CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x1991B890)
#define CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x1991B800)
#define CHARACTERLINELIGHTGROUP_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x1991B9B0)
#define CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1991BA80)
#define CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1991BA30)
#define CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x1991B850)
#define CHARACTERLINELIGHTGROUP_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1991B8E0)
#define CHARACTERLINELIGHTGROUP_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x1991B9F0)
#define CHARACTERLINELIGHTGROUP_PAHDFFEBGPO_OFFSET UNITYSDK_OFFSET(0x19919CC0)
#define CHARACTERLINELIGHTGROUP_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x19919A50)
#define CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x1991B7B0)
#define CHARACTERLINELIGHTGROUP_UNREGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x1991A020)
#define CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1991B270)
#define CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET UNITYSDK_OFFSET(0x1991ACE0)
#define CHARACTERLINELIGHTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1991B220)

inline static constexpr unsigned int CharacterLineLightGroup_TypeDefinitionIndex = 48490;

	class CharacterLineLightGroup : public ::ScenenLightManager::SceneManagedLightComponent1
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Lines; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* Points; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* Characters; // 0x38
		static ::CharacterLineLightGroup** StaticGet_Instanced()
		{
			return (::CharacterLineLightGroup**)UnitySDK::FromName("", "CharacterLineLightGroup")->GetStaticField(0x301B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CTOR_OFFSET))(this);
		}

		::System::Boolean CheckCharacterRegisted(::CharacterLineLightGroup_BCMLJEIDFBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CharacterLineLightGroup_BCMLJEIDFBN*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CHECKCHARACTERREGISTED_OFFSET))(this, a1);
		}

		::System::Void RegisterCharacter(::CharacterLineLightGroup_BCMLJEIDFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CharacterLineLightGroup_BCMLJEIDFBN*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_REGISTERCHARACTER_OFFSET))(this, a1);
		}

		::System::Void UnregisterCharacter(::CharacterLineLightGroup_BCMLJEIDFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CharacterLineLightGroup_BCMLJEIDFBN*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UNREGISTERCHARACTER_OFFSET))(this, a1);
		}

		::System::Single GetDistPureSqr(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_GETDISTPURESQR_OFFSET))(this, a1, a2);
		}

		::System::Int32 JLHFHBGGLIP(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_JLHFHBGGLIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JEEPOIPPJLG(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Color a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_JEEPOIPPJLG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PAHDFFEBGPO(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_PAHDFFEBGPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean UpdateLightInfo(::BMFJEMFMLGC a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMFJEMFMLGC, ::System::Boolean))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET))(this);
		}

	};

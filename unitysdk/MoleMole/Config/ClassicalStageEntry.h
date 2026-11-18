#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StageEntry.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PDKBJLIIIEJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x19B11DF0)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GETMAPRANGE_OFFSET UNITYSDK_OFFSET(0x19B11E90)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GETSTAGELOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x19B12000)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_ENVPREFABPATH_OFFSET UNITYSDK_OFFSET(0x19B11DD0)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGEAVATARCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x19B11D90)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x19B11D50)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGESCENEPATH_OFFSET UNITYSDK_OFFSET(0x19B11D70)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGESCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x19B11DB0)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B11E80)
#define MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY___BASE_GETSTAGELOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x19B12060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ClassicalStageEntry_TypeDefinitionIndex = 50796;

	class ClassicalStageEntry : public ::MoleMole::Config::StageEntry
	{
	public:
		::PDKBJLIIIEJ* _configTemplateExt; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGENAME_OFFSET))(this);
		}

		::System::String* get_StageScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGESCENEPATH_OFFSET))(this);
		}

		::System::String* get_StageAvatarCameraKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGEAVATARCAMERAKEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_StageScriptPath()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_STAGESCRIPTPATH_OFFSET))(this);
		}

		::System::String* get_EnvPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GET_ENVPREFABPATH_OFFSET))(this);
		}

		static ::MoleMole::Config::StageEntry* Allocate(::PDKBJLIIIEJ* configTemplateExt)
		{
			return ((::MoleMole::Config::StageEntry*(*)(::PDKBJLIIIEJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_ALLOCATE_OFFSET))(configTemplateExt);
		}

		::System::Void GetMapRange(::UnityEngine::Vector2& start, ::UnityEngine::Vector2& end)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GETMAPRANGE_OFFSET))(this, start, end);
		}

		::System::String* GetStageLocationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY_GETSTAGELOCATIONNAME_OFFSET))(this);
		}

		::System::String* __base_GetStageLocationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CLASSICALSTAGEENTRY___BASE_GETSTAGELOCATIONNAME_OFFSET))(this);
		}
	};
}

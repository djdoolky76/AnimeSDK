#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StageEntry.h"

class MBAOHJLIJHD;
namespace MoleMole { class MonoStageEnv; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x192B9F40)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x192B9F30)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_STAGESCENEPATH_OFFSET UNITYSDK_OFFSET(0x192B9F20)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x192B9FF0)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x192B9FE0)
#define MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY___BASE_LOADSTAGEENV_OFFSET UNITYSDK_OFFSET(0x192BA4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StreamingStageEntry_TypeDefinitionIndex = 52934;

	class StreamingStageEntry : public ::MoleMole::Config::StageEntry
	{
	public:
		::System::String* _sceneName; // 0x80
		::MBAOHJLIJHD* _sceneData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_StageScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_STAGESCENEPATH_OFFSET))(this);
		}

		::System::Object* get_CustomData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_GET_CUSTOMDATA_OFFSET))(this);
		}

		static ::MoleMole::Config::StreamingStageEntry* Allocate(::System::String* sceneName, ::MBAOHJLIJHD* streamingSceneData)
		{
			return ((::MoleMole::Config::StreamingStageEntry*(*)(::System::String*, ::MBAOHJLIJHD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_ALLOCATE_OFFSET))(sceneName, streamingSceneData);
		}

		::MoleMole::MonoStageEnv* LoadStageEnv()
		{
			return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY_LOADSTAGEENV_OFFSET))(this);
		}

		::MoleMole::MonoStageEnv* __base_LoadStageEnv()
		{
			return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGSTAGEENTRY___BASE_LOADSTAGEENV_OFFSET))(this);
		}
	};
}

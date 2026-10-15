#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDOHKCEJPJP.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE111DE0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE111840)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE1112E0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0xE1117F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_TypeDefinitionIndex = 71000;

	class StageHarmonyTrafficLightMonoPlugin
	{
	public:
		::System::Int32 ComponentID; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* Channle; // 0x38
		::System::Single Signal; // 0x40
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* IntersectionPhases; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Load(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

	};
}

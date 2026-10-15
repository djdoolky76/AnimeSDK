#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A28D0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillLineAssetConfig_TypeDefinitionIndex = 52037;

	class SkillLineAssetConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* LineTypeStates; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLLINEASSETCONFIG_CTOR_OFFSET))(this);
		}

	};
}

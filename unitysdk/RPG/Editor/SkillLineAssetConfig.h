#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AD3A0)

namespace RPG::Editor
{
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATERIALBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E04C0)

namespace RPG::Client
{
	class MaterialSwitchMonoPlugin_MaterialBlock : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x10
		::System::Int32 TargetMatIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATERIALBLOCK_CTOR_OFFSET))(this);
		}

	};
}

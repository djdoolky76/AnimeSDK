#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD78910)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WingInstanceManagerMonoPlugin_TypeDefinitionIndex = 70534;

	class Effect_WingInstanceManagerMonoPlugin
	{
	public:
		::UnityEngine::Mesh* TargetMesh; // 0x30
		::Il2CppArray<::UnityEngine::Material*>* TargetMats; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGNJKKCDBA_TransformIndexPath.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SKIRTIKCONFIG_TRANSFORMLUT_CTOR_OFFSET UNITYSDK_OFFSET(0xE0DF9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkirtIKConfig_TransformLUT_TypeDefinitionIndex = 68380;

	class SkirtIKConfig_TransformLUT : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean SkirtLUTEnable; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* SourcePrefab; // 0x20
		::MIGNJKKCDBA_TransformIndexPath left_HipL_Path; // 0x28
		::MIGNJKKCDBA_TransformIndexPath left_KneeL_Path; // 0x38
		::Il2CppArray<::System::Object*>* LSkirtBone; // 0x48
		::MIGNJKKCDBA_TransformIndexPath right_HipR_Path; // 0x50
		::MIGNJKKCDBA_TransformIndexPath right_KneeR_Path; // 0x60
		::Il2CppArray<::System::Object*>* RSkirtBone; // 0x70
		::Il2CppArray<::System::Object*>* HairBone; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKIRTIKCONFIG_TRANSFORMLUT_CTOR_OFFSET))(this);
		}

	};
}

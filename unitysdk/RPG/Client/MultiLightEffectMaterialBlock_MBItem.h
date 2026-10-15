#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_MBITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD8D1A40)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiLightEffectMaterialBlock_MBItem_TypeDefinitionIndex = 70690;

	class MultiLightEffectMaterialBlock_MBItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* Material; // 0x20
		::Il2CppArray<::System::Object*>* OriginDataFloat; // 0x28
		::Il2CppArray<::System::Object*>* OriginDataColor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_MBITEM_CTOR_OFFSET))(this);
		}

	};
}

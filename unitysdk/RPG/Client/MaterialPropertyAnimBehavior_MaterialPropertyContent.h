#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertyAnimBehavior_MaterialProperty.h"
#include "unitysdk/RPG/Client/MaterialPropertyAnimBehavior_MaterialPropertyType.h"
#include "unitysdk/RPG/Client/MaterialPropertyAnimBehavior_MaterialPropertyValueMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MATERIALPROPERTYCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE0289B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimBehavior_MaterialPropertyContent_TypeDefinitionIndex = 72700;

	class MaterialPropertyAnimBehavior_MaterialPropertyContent : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::UInt32 MatIndex; // 0x18
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialProperty MatProperty; // 0x1C
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyType PropertyType; // 0x20
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyValueMode ValueMode; // 0x24
		::System::Boolean SpeedInitialized; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single OriginFloat; // 0x2C
		::UnityEngine::Vector4 OriginVector; // 0x30
		::System::Single CurrentFloat; // 0x40
		::UnityEngine::Vector4 CurrentVector; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MATERIALPROPERTYCONTENT_CTOR_OFFSET))(this);
		}

	};
}

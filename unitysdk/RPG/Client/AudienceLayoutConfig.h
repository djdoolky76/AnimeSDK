#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_DensityLevel.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }

#define RPG_CLIENT_AUDIENCELAYOUTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AC040)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceLayoutConfig_TypeDefinitionIndex = 69148;

	class AudienceLayoutConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Vector2 size; // 0x18
		::System::Int32 column; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::AudienceLayoutConfig_DensityLevel densityLevel; // 0x28
		::Il2CppArray<::System::Object*>* crowdConfigs; // 0x38
		::Il2CppArray<::System::Object*>* identifiers; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCELAYOUTCONFIG_CTOR_OFFSET))(this);
		}

	};
}

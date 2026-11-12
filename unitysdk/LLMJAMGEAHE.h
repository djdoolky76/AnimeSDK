#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace System { class String; }

#define LLMJAMGEAHE_CTOR_OFFSET UNITYSDK_OFFSET(0xC014AE0)

inline static constexpr unsigned int LLMJAMGEAHE_TypeDefinitionIndex = 76059;

	class LLMJAMGEAHE : public ::System::Object
	{
	public:
		::System::String* ONIAAMLDBLJ; // 0x10
		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* AKIEBMCJMFD; // 0x18
		::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMJAMGEAHE_CTOR_OFFSET))(this);
		}

	};

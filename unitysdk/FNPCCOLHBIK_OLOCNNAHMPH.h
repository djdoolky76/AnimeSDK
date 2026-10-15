#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define FNPCCOLHBIK_OLOCNNAHMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x158D0EB0)

inline static constexpr unsigned int FNPCCOLHBIK_OLOCNNAHMPH_TypeDefinitionIndex = 60266;

	class FNPCCOLHBIK_OLOCNNAHMPH : public ::System::Object
	{
	public:
		::System::String* APODMGIFMFI; // 0x10
		::System::String* NHIGJKJJPGM; // 0x18
		::RPG::GameCore::GameEntity* FKMOKGOBEHJ; // 0x20
		::System::Boolean CIFAPEKOKFC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_OLOCNNAHMPH_CTOR_OFFSET))(this);
		}

	};

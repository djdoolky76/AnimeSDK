#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AwaitDeathProcessState.h"
#include "unitysdk/System/Object.h"
class CFFPEAALCPH;
namespace RPG::GameCore { class GameEntity; }

#define ABEHCMLPKAN_CTOR_OFFSET UNITYSDK_OFFSET(0x18CA1C00)

inline static constexpr unsigned int ABEHCMLPKAN_TypeDefinitionIndex = 57445;

	class ABEHCMLPKAN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x10
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x18
		::CFFPEAALCPH* OCLPHKFFANL; // 0x20
		::RPG::GameCore::AwaitDeathProcessState MEPFOEEGBEA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEHCMLPKAN_CTOR_OFFSET))(this);
		}

	};

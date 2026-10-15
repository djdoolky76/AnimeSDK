#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define BMMMMCHEPDI_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xBDBEC10)
#define BMMMMCHEPDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBEBC0)
#define BMMMMCHEPDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDBF050)

	class BMMMMCHEPDI : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x10
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BMMMMCHEPDI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean AEGMLJMJBDO(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + BMMMMCHEPDI_AEGMLJMJBDO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMMMCHEPDI_DISPOSE_OFFSET))(this);
		}

	};

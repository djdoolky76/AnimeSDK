#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IOAEALGNCHC_OCENPMNMNEG_OFFSET UNITYSDK_OFFSET(0x164FB850)

inline static constexpr unsigned int IOAEALGNCHC_TypeDefinitionIndex = 57384;

	class IOAEALGNCHC : public ::System::Object
	{
	public:
		static ::System::String* OCENPMNMNEG(::RPG::GameCore::EffectConfig* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::EffectConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IOAEALGNCHC_OCENPMNMNEG_OFFSET))(a1, a2);
		}

	};

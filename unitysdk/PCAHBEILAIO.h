#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class SkillData; }

#define PCAHBEILAIO_HHFDAIJIIJN_OFFSET UNITYSDK_OFFSET(0xBFC4AD0)

inline static constexpr unsigned int PCAHBEILAIO_TypeDefinitionIndex = 57669;

	class PCAHBEILAIO : public ::System::Object
	{
	public:
		static ::RPG::GameCore::SkillData* HHFDAIJIIJN(::RPG::GameCore::GameWorld* a1)
		{
			return ((::RPG::GameCore::SkillData*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + PCAHBEILAIO_HHFDAIJIIJN_OFFSET))(a1);
		}

	};

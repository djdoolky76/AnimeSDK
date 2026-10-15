#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class RtSkillConfig; }

#define BCPFEJJMHEE_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x162DDEC0)

inline static constexpr unsigned int BCPFEJJMHEE_TypeDefinitionIndex = 54058;

	class BCPFEJJMHEE : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillConfig* a1, ::RPG::GameCore::RtSkillPropertyType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtSkillConfig*, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + BCPFEJJMHEE_MDGNJPIMCPH_OFFSET))(a1, a2);
		}

	};

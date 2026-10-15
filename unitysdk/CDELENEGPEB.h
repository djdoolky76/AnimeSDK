#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/Client/UISkillIndexMask.h"
#include "unitysdk/System/Object.h"

#define CDELENEGPEB_GNADABFLEFM_1_OFFSET UNITYSDK_OFFSET(0xC763720)
#define CDELENEGPEB_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xC7636D0)
#define CDELENEGPEB_JPIJCCHOIBC_OFFSET UNITYSDK_OFFSET(0xC763680)

inline static constexpr unsigned int CDELENEGPEB_TypeDefinitionIndex = 72008;

	class CDELENEGPEB : public ::System::Object
	{
	public:
		static ::RPG::Client::UISkillIndexMask JPIJCCHOIBC(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndexMask(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CDELENEGPEB_JPIJCCHOIBC_OFFSET))(a1);
		}

		static ::System::Boolean GNADABFLEFM(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndexMask a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndexMask))((::PBYTE)hIl2Cpp + CDELENEGPEB_GNADABFLEFM_OFFSET))(a1, a2);
		}

		static ::System::Boolean GNADABFLEFM_1(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndexMask a2, ::RPG::Client::UISkillIndex a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndexMask, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CDELENEGPEB_GNADABFLEFM_1_OFFSET))(a1, a2, a3);
		}

	};

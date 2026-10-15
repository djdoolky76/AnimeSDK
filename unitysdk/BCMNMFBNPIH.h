#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
#include "unitysdk/System/Object.h"

#define BCMNMFBNPIH_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x162D78C0)

inline static constexpr unsigned int BCMNMFBNPIH_TypeDefinitionIndex = 54054;

	class BCMNMFBNPIH : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::RtSkillConditionMask a1, ::RPG::GameCore::RtSkillConditionMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RtSkillConditionMask, ::RPG::GameCore::RtSkillConditionMask))((::PBYTE)hIl2Cpp + BCMNMFBNPIH_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

	};

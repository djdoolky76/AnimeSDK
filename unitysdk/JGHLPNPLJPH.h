#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillSubTargetType.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SkillTargetConfig; }

#define JGHLPNPLJPH_BOFDOOLKGIN_OFFSET UNITYSDK_OFFSET(0x1E2178A0)
#define JGHLPNPLJPH_CIANFINOOKF_OFFSET UNITYSDK_OFFSET(0x1E2177D0)
#define JGHLPNPLJPH_HHEHGDFCJGG_OFFSET UNITYSDK_OFFSET(0x1E217830)
#define JGHLPNPLJPH_JFNHKEKIDKJ_OFFSET UNITYSDK_OFFSET(0x1E2177A0)
#define JGHLPNPLJPH_JJMAINNIJKO_OFFSET UNITYSDK_OFFSET(0x1E2177B0)
#define JGHLPNPLJPH_KIDEECMLFDI_OFFSET UNITYSDK_OFFSET(0x1E217780)
#define JGHLPNPLJPH_LJJDMNJGCMH_1_OFFSET UNITYSDK_OFFSET(0x1E217770)
#define JGHLPNPLJPH_LJJDMNJGCMH_OFFSET UNITYSDK_OFFSET(0x1E217750)

inline static constexpr unsigned int JGHLPNPLJPH_TypeDefinitionIndex = 25336;

	class JGHLPNPLJPH : public ::System::Object
	{
	public:
		static ::System::Boolean LJJDMNJGCMH(::RPG::GameCore::SkillTargetType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_LJJDMNJGCMH_OFFSET))(a1);
		}

		static ::System::Boolean LJJDMNJGCMH_1(::RPG::GameCore::SkillSubTargetType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillSubTargetType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_LJJDMNJGCMH_1_OFFSET))(a1);
		}

		static ::System::Boolean KIDEECMLFDI(::RPG::GameCore::SkillTargetType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_KIDEECMLFDI_OFFSET))(a1);
		}

		static ::System::Boolean JFNHKEKIDKJ(::RPG::GameCore::SkillTargetType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_JFNHKEKIDKJ_OFFSET))(a1);
		}

		static ::System::Boolean JJMAINNIJKO(::RPG::GameCore::SkillTargetType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_JJMAINNIJKO_OFFSET))(a1);
		}

		static ::System::Boolean CIANFINOOKF(::RPG::GameCore::SkillTargetType a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_CIANFINOOKF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TeamType HHEHGDFCJGG(::RPG::GameCore::SkillTargetType a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::SkillTargetType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_HHEHGDFCJGG_OFFSET))(a1, a2);
		}

		static ::System::Boolean BOFDOOLKGIN(::RPG::GameCore::SkillTargetConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*))((::PBYTE)hIl2Cpp + JGHLPNPLJPH_BOFDOOLKGIN_OFFSET))(a1);
		}

	};

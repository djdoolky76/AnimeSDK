#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class CharacterSkillStatisticConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }

#define ECAIAJKEKLJ_CNADGAKBGEJ_OFFSET UNITYSDK_OFFSET(0x12D05630)
#define ECAIAJKEKLJ_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x12D05120)
#define ECAIAJKEKLJ_IKOIMKBLGJP_OFFSET UNITYSDK_OFFSET(0x12D05270)
#define ECAIAJKEKLJ_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x12D05220)
#define ECAIAJKEKLJ_NDFAEGPDFHD_OFFSET UNITYSDK_OFFSET(0x12D054C0)

inline static constexpr unsigned int ECAIAJKEKLJ_TypeDefinitionIndex = 56489;

	class ECAIAJKEKLJ : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterSkillCustomStatisticConfig** StaticGet_PNAKCBAAJAC()
		{
			return (::RPG::GameCore::CharacterSkillCustomStatisticConfig**)UnitySDK::FromName("", "ECAIAJKEKLJ")->GetStaticField(0x6E540);
		}

		static ::RPG::GameCore::CharacterSkillStatisticConfig** StaticGet_BLKEHCLJJLC()
		{
			return (::RPG::GameCore::CharacterSkillStatisticConfig**)UnitySDK::FromName("", "ECAIAJKEKLJ")->GetStaticField(0x6E548);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_LMEAHGFFMIB_OFFSET))();
		}

		static ::System::Int32 IKOIMKBLGJP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_IKOIMKBLGJP_OFFSET))(a1, a2);
		}

		static ::System::Int32 NDFAEGPDFHD(::RPG::GameCore::SkillMaxHitConfigList* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::SkillMaxHitConfigList*, ::System::String*))((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_NDFAEGPDFHD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::CharacterSkillCustomStatisticConfig* CNADGAKBGEJ()
		{
			return ((::RPG::GameCore::CharacterSkillCustomStatisticConfig*(*)())((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_CNADGAKBGEJ_OFFSET))();
		}

	};

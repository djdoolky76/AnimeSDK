#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class CharacterSkillStatisticConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECAIAJKEKLJ_CNADGAKBGEJ_OFFSET UNITYSDK_OFFSET(0x1C3CE9A0)
#define ECAIAJKEKLJ_FECFIIDHEKG_OFFSET UNITYSDK_OFFSET(0x1C3CE730)
#define ECAIAJKEKLJ_FEDMMGKLGPK_OFFSET UNITYSDK_OFFSET(0x1C3CE5C0)
#define ECAIAJKEKLJ_GHEJFJKKMLJ_OFFSET UNITYSDK_OFFSET(0x1C3CE800)
#define ECAIAJKEKLJ_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1C3CE260)
#define ECAIAJKEKLJ_IKOIMKBLGJP_OFFSET UNITYSDK_OFFSET(0x1C3CE3B0)
#define ECAIAJKEKLJ_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x1C3CE360)

inline static constexpr unsigned int ECAIAJKEKLJ_TypeDefinitionIndex = 57709;

	class ECAIAJKEKLJ : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterSkillCustomStatisticConfig** StaticGet_PNAKCBAAJAC()
		{
			return (::RPG::GameCore::CharacterSkillCustomStatisticConfig**)UnitySDK::FromName("", "ECAIAJKEKLJ")->GetStaticField(0x71900);
		}

		static ::RPG::GameCore::CharacterSkillStatisticConfig** StaticGet_BLKEHCLJJLC()
		{
			return (::RPG::GameCore::CharacterSkillStatisticConfig**)UnitySDK::FromName("", "ECAIAJKEKLJ")->GetStaticField(0x71908);
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

		static ::System::Int32 FEDMMGKLGPK(::RPG::GameCore::SkillMaxHitConfigList* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::SkillMaxHitConfigList*, ::System::String*))((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_FEDMMGKLGPK_OFFSET))(a1, a2);
		}

		static ::System::Boolean FECFIIDHEKG(::System::String* a1, ::System::Func_2<::System::String*, ::System::Boolean>* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Func_2<::System::String*, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_FECFIIDHEKG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GHEJFJKKMLJ(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>* a1, ::System::String* a2, ::System::Func_2<::System::String*, ::System::Boolean>* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>*, ::System::String*, ::System::Func_2<::System::String*, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_GHEJFJKKMLJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::CharacterSkillCustomStatisticConfig* CNADGAKBGEJ()
		{
			return ((::RPG::GameCore::CharacterSkillCustomStatisticConfig*(*)())((::PBYTE)hIl2Cpp + ECAIAJKEKLJ_CNADGAKBGEJ_OFFSET))();
		}

	};

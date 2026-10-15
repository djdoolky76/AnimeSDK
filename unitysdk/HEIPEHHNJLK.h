#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HEIPEHHNJLK;
namespace RPG::GameCore { class ILBattleMonsterSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define HEIPEHHNJLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C56C90)
#define HEIPEHHNJLK_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0x15C56900)
#define HEIPEHHNJLK_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x15C56910)
#define HEIPEHHNJLK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C56970)
#define HEIPEHHNJLK_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x15C569D0)
#define HEIPEHHNJLK_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x15C56840)
#define HEIPEHHNJLK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15C56890)
#define HEIPEHHNJLK_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x15C568F0)

inline static constexpr unsigned int HEIPEHHNJLK_TypeDefinitionIndex = 54213;

	class HEIPEHHNJLK : public ::System::Object
	{
	public:
		::RPG::GameCore::RtSkillConfig* IGHAHBNLIJA; // 0x10
		::RPG::GameCore::ILBattleMonsterSkillConfigRow* IBPBJBOKKMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_EGHLNHCEBGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_HONGLJECAAC_OFFSET))(this);
		}

		::HEIPEHHNJLK* KPJGDHLENIP(::RPG::GameCore::ILBattleMonsterSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2)
		{
			return ((::HEIPEHHNJLK*(*)(::PVOID, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + HEIPEHHNJLK_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};

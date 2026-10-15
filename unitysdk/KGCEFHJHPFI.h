#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
class KGCEFHJHPFI;
namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define KGCEFHJHPFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C78D0)
#define KGCEFHJHPFI_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xB3C75C0)
#define KGCEFHJHPFI_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0xB3C75D0)
#define KGCEFHJHPFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3C75E0)
#define KGCEFHJHPFI_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xB3C77C0)
#define KGCEFHJHPFI_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xB3C7500)
#define KGCEFHJHPFI_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB3C7550)
#define KGCEFHJHPFI_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB3C75B0)

inline static constexpr unsigned int KGCEFHJHPFI_TypeDefinitionIndex = 54296;

	class KGCEFHJHPFI : public ::System::Object
	{
	public:
		::RPG::GameCore::RtSkillConfig* IGHAHBNLIJA; // 0x10
		::RPG::GameCore::ILBattleAvatarSkillConfigRow* IBPBJBOKKMF; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* BGEOOALFJOL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_EGHLNHCEBGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_HONGLJECAAC_OFFSET))(this);
		}

		::KGCEFHJHPFI* KPJGDHLENIP(::RPG::GameCore::ILBattleAvatarSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2, ::System::UInt32 a3)
		{
			return ((::KGCEFHJHPFI*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + KGCEFHJHPFI_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};

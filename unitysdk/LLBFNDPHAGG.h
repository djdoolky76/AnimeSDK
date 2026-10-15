#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
class FHBHJAHCJHN;
class LLBFNDPHAGG;
namespace RPG::GameCore { class ILBattleAvatarSkillConfigRow; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define LLBFNDPHAGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB75D9D0)
#define LLBFNDPHAGG_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xB75D500)
#define LLBFNDPHAGG_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0xB75D510)
#define LLBFNDPHAGG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB75D520)
#define LLBFNDPHAGG_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xB75D710)
#define LLBFNDPHAGG_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xB75D440)
#define LLBFNDPHAGG_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB75D490)
#define LLBFNDPHAGG_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB75D4F0)

inline static constexpr unsigned int LLBFNDPHAGG_TypeDefinitionIndex = 54207;

	class LLBFNDPHAGG : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BGEOOALFJOL; // 0x10
		::RPG::GameCore::ILBattleAvatarSkillConfigRow* IBPBJBOKKMF; // 0x18
		::FHBHJAHCJHN* DGOCFOMEKHO; // 0x20
		::RPG::GameCore::RtSkillConfig* IGHAHBNLIJA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_EGHLNHCEBGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_HONGLJECAAC_OFFSET))(this);
		}

		::LLBFNDPHAGG* KPJGDHLENIP(::RPG::GameCore::ILBattleAvatarSkillConfigRow* a1, ::RPG::GameCore::RtSkillConfig* a2, ::System::UInt32 a3, ::FHBHJAHCJHN* a4)
		{
			return ((::LLBFNDPHAGG*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*, ::RPG::GameCore::RtSkillConfig*, ::System::UInt32, ::FHBHJAHCJHN*))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + LLBFNDPHAGG_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};

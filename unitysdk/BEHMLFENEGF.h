#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
class GOCLJECCFAK;
class KFELGAIGHAP;
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define BEHMLFENEGF_CADCJOJKABL_OFFSET UNITYSDK_OFFSET(0x16323220)
#define BEHMLFENEGF_CTOR_OFFSET UNITYSDK_OFFSET(0x16323760)
#define BEHMLFENEGF_EOKBJHDAOAO_OFFSET UNITYSDK_OFFSET(0x16323480)
#define BEHMLFENEGF_HLKLBKNLFFO_OFFSET UNITYSDK_OFFSET(0x16323120)
#define BEHMLFENEGF_MLJMJNEHDAA_OFFSET UNITYSDK_OFFSET(0x16322DA0)

inline static constexpr unsigned int BEHMLFENEGF_TypeDefinitionIndex = 54862;

	class BEHMLFENEGF : public ::System::Object
	{
	public:
		::GELIALJDFBL* EKIJFPIPCKF; // 0x10
		::GOCLJECCFAK* EABKOHGCHFP; // 0x18
		::KFELGAIGHAP* GEKIGCNCNBH; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHMLFENEGF_CTOR_OFFSET))(this);
		}

		::System::Boolean MLJMJNEHDAA(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BEHMLFENEGF_MLJMJNEHDAA_OFFSET))(this, a1);
		}

		::System::Void CADCJOJKABL(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BEHMLFENEGF_CADCJOJKABL_OFFSET))(this, a1);
		}

		::System::Boolean HLKLBKNLFFO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BEHMLFENEGF_HLKLBKNLFFO_OFFSET))(this, a1);
		}

		::System::Void EOKBJHDAOAO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BEHMLFENEGF_EOKBJHDAOAO_OFFSET))(this, a1);
		}

	};

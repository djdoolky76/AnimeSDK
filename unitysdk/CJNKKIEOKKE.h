#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CJNKKIEOKKE;
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define CJNKKIEOKKE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D0090)
#define CJNKKIEOKKE_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xD4CFF00)
#define CJNKKIEOKKE_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0xD4CFF10)
#define CJNKKIEOKKE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD4CFF20)
#define CJNKKIEOKKE_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xD4CFF80)
#define CJNKKIEOKKE_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xD4CFE80)
#define CJNKKIEOKKE_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xD4CFE90)
#define CJNKKIEOKKE_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xD4CFEF0)

inline static constexpr unsigned int CJNKKIEOKKE_TypeDefinitionIndex = 54300;

	class CJNKKIEOKKE : public ::System::Object
	{
	public:
		::RPG::GameCore::RtSkillConfig* IGHAHBNLIJA; // 0x10
		::System::Object* IBPBJBOKKMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_EGHLNHCEBGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_HONGLJECAAC_OFFSET))(this);
		}

		::CJNKKIEOKKE* KPJGDHLENIP(::System::Object* a1, ::RPG::GameCore::RtSkillConfig* a2)
		{
			return ((::CJNKKIEOKKE*(*)(::PVOID, ::System::Object*, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CJNKKIEOKKE_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JDCMHDIFINB;
namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define JDCMHDIFINB_CTOR_OFFSET UNITYSDK_OFFSET(0x165BF590)
#define JDCMHDIFINB_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0x165BF4D0)
#define JDCMHDIFINB_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x165BF4E0)
#define JDCMHDIFINB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165BF4F0)
#define JDCMHDIFINB_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x165BF540)
#define JDCMHDIFINB_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x165BF490)
#define JDCMHDIFINB_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x165BF4A0)
#define JDCMHDIFINB_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x165BF4C0)

inline static constexpr unsigned int JDCMHDIFINB_TypeDefinitionIndex = 54070;

	class JDCMHDIFINB : public ::System::Object
	{
	public:
		::RPG::GameCore::RtSkillConfig* PPANINAEOFD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_EGHLNHCEBGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCMHDIFINB_HONGLJECAAC_OFFSET))(this);
		}

		::JDCMHDIFINB* KPJGDHLENIP(::RPG::GameCore::RtSkillConfig* a1)
		{
			return ((::JDCMHDIFINB*(*)(::PVOID, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + JDCMHDIFINB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + JDCMHDIFINB_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};

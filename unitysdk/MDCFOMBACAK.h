#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class FollowWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define MDCFOMBACAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB897820)
#define MDCFOMBACAK_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xB897880)
#define MDCFOMBACAK_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xB897AB0)
#define MDCFOMBACAK_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xB897BD0)

inline static constexpr unsigned int MDCFOMBACAK_TypeDefinitionIndex = 54742;

	class MDCFOMBACAK : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x48
		::RPG::GameCore::FollowWithDetectProjectileData* FPGPHIEOMFL; // 0x50
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + MDCFOMBACAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MDCFOMBACAK_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCFOMBACAK_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDCFOMBACAK_PGKPGNJJMMB_OFFSET))(this, a1);
		}

	};

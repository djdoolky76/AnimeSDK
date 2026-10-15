#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class FollowWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define MDCFOMBACAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB89E5D0)
#define MDCFOMBACAK_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xB89E630)
#define MDCFOMBACAK_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xB89E860)
#define MDCFOMBACAK_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xB89E980)

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

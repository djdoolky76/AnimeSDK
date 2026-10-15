#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BouncyProjectileData; }
namespace UnityEngine { class Collider; }

#define NAFLIDGJPJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA98070)
#define NAFLIDGJPJK_FIOGIHDLLEN_OFFSET UNITYSDK_OFFSET(0xBA98D80)
#define NAFLIDGJPJK_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBA98430)
#define NAFLIDGJPJK_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xBA98210)
#define NAFLIDGJPJK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBA98190)
#define NAFLIDGJPJK_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBA98C80)

	class NAFLIDGJPJK : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::BouncyProjectileData* ANEIIAADMKM; // 0x48
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x50
		::System::Single DHMCBCACBEL; // 0x58
		::UnityEngine::Vector3 JHOGJELLFPF; // 0x5C
		::System::Single FLBLLMPABOJ; // 0x68
		::System::Boolean GCFHHOLDLAB; // 0x6C
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Boolean FIOGIHDLLEN(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NAFLIDGJPJK_FIOGIHDLLEN_OFFSET))(this, a1);
		}

	};

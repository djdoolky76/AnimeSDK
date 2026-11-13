#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BouncyProjectileData; }
namespace UnityEngine { class Collider; }

#define NAFLIDGJPJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEB290)
#define NAFLIDGJPJK_FIOGIHDLLEN_OFFSET UNITYSDK_OFFSET(0x1BAEBFA0)
#define NAFLIDGJPJK_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x1BAEB650)
#define NAFLIDGJPJK_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x1BAEB430)
#define NAFLIDGJPJK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1BAEB3B0)
#define NAFLIDGJPJK_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x1BAEBEA0)

inline static constexpr unsigned int NAFLIDGJPJK_TypeDefinitionIndex = 55904;

	class NAFLIDGJPJK : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x48
		::RPG::GameCore::BouncyProjectileData* ANEIIAADMKM; // 0x50
		::System::Boolean GCFHHOLDLAB; // 0x58
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 JHOGJELLFPF; // 0x5C
		::System::Single FLBLLMPABOJ; // 0x68
		::System::Single DHMCBCACBEL; // 0x6C
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

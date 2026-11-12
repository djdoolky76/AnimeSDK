#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class LinearProjectileData; }

#define IDGOGPGNKKC_CTOR_OFFSET UNITYSDK_OFFSET(0x16E3BC80)
#define IDGOGPGNKKC_EGFMFDJDDOA_OFFSET UNITYSDK_OFFSET(0x16E3C060)
#define IDGOGPGNKKC_FDGDOPLLMHM_OFFSET UNITYSDK_OFFSET(0x16E3C5E0)
#define IDGOGPGNKKC_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x16E3C270)
#define IDGOGPGNKKC_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x16E3BCE0)
#define IDGOGPGNKKC_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0x16E3BEC0)
#define IDGOGPGNKKC_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x16E3C4F0)

inline static constexpr unsigned int IDGOGPGNKKC_TypeDefinitionIndex = 55912;

	class IDGOGPGNKKC : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::LinearProjectileData* AGGAJFADMNK; // 0x48
		::System::Single GNBPDGBMEIF; // 0x50
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_MGFLFCHMGPA_OFFSET))(this);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_NNALPNDFFIJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 EGFMFDJDDOA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_EGFMFDJDDOA_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Single FDGDOPLLMHM(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDGOGPGNKKC_FDGDOPLLMHM_OFFSET))(this, a1);
		}

	};

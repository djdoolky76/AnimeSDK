#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class CameraForwardWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define KPHJPBMAGJD_ALDEADLODCF_OFFSET UNITYSDK_OFFSET(0xBE133E0)
#define KPHJPBMAGJD_CMGKENHAHGP_OFFSET UNITYSDK_OFFSET(0xBE121D0)
#define KPHJPBMAGJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE11E60)
#define KPHJPBMAGJD_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBE13570)
#define KPHJPBMAGJD_IAOOOGMDPAK_OFFSET UNITYSDK_OFFSET(0xBE125B0)
#define KPHJPBMAGJD_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0xBE12720)
#define KPHJPBMAGJD_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xBE131B0)
#define KPHJPBMAGJD_MAEIFPKILNB_OFFSET UNITYSDK_OFFSET(0xBE12250)
#define KPHJPBMAGJD_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBE11EC0)
#define KPHJPBMAGJD_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0xBE12850)
#define KPHJPBMAGJD_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBE132D0)

inline static constexpr unsigned int KPHJPBMAGJD_TypeDefinitionIndex = 55905;

	class KPHJPBMAGJD : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* GEDMHBDAPGC; // 0x48
		::RPG::GameCore::CameraForwardWithDetectProjectileData* FPGPHIEOMFL; // 0x50
		::System::Boolean OOFAAJKBFBH; // 0x58
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void CMGKENHAHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_CMGKENHAHGP_OFFSET))(this);
		}

		::System::Void MAEIFPKILNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_MAEIFPKILNB_OFFSET))(this);
		}

		::System::Void IAOOOGMDPAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_IAOOOGMDPAK_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNMKCFMJPHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_JNMKCFMJPHN_OFFSET))(this);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_NNALPNDFFIJ_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void ALDEADLODCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_ALDEADLODCF_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KPHJPBMAGJD_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

	};
